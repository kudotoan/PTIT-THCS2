#include <stdio.h>
void toado(int a[][100], int *bot, int *right) {
	int x=*bot,y=*right;
	if (x>y) y=x; else x=y;
	int maxi=0,maxj=0,nhoi, nhoj;
	for (int i=0; i<=x; i++) {
		for (int j=0; j<=x; j++) {
			if (a[i][j]==1) {
				if (i>=maxi) {
					maxi=i;
					nhoj=j;
				}
				if (j>=maxj) {
					maxj=j;
					nhoi=i;
				}
			}
		}
	}
	if (maxi>maxj) {
		*bot=maxi;
		*right=nhoj;
	} else {
		*bot=nhoi;
		*right=maxj;
	}
}

void latmatran(int a[][100],int bot, int right, int* k) {
	for (int i=0; i<=bot; i++) {
		for (int j=0; j<=right; j++) {
			if (a[i][j]==0) {
				a[i][j]=1;
			} else a[i][j]=0;
		}
	}
	if (bot<right) bot = right; else right=bot;
	for (int i=0; i<=bot; i++) {
		for (int j=0; j<=bot; j++) {
			if (a[i][j]==1) {
			*k=0;
			break;
		}
		}
	}
}
main () {
	int n;
	scanf("%d",&n);
	getchar();
	int a[n][100],ok=1;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
//			scanf("%d",&a[i][j]);
			a[i][j]=getchar()-48;
			if (a[i][j]==-38) j=-1;
			if (a[i][j]==1) ok=0;
		}
	}
//	printf("\n");
//		for (int i=0; i<n; i++) {
//		for (int j=0; j<n; j++) {
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//		}
//		printf("\n");
	int bot=n-1,right=n-1;
	toado(a,&bot,&right);
	int dem=0;
	while (ok==0) {
		ok=1;
		latmatran(a,bot,right,&ok);
		dem++;
		if (ok==0) {
			toado(a,&bot,&right);
		}
	}
	printf("%d",dem);
}
