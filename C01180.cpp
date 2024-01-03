#include <stdio.h>
void nhap(int a[][100],int n,int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][100],int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) printf("%d ",a[i][j]);
		printf("\n");
	}
}
main () {
	int t;
	scanf("%d",&t);
	for (int dem=1; dem<=t; dem++) {
		int n,m;
		scanf("%d%d",&n,&m);
		int a[100][100];
		nhap(a,n,m);
		int maxc=0,c,maxh=0,h;
		for (int i=0; i<n; i++) {
			int tam=0;
			for (int j=0; j<m; j++) {
				tam+=a[i][j];
			}
			if (tam>maxh) {
				maxh=tam;
				h=i;
			}
		}
		//hang lon nhat =h;
		for (int i=h; i<n-1; i++) {
			for (int j=0; j<m; j++) {
				a[i][j] = a[i+1][j];
			}
		}
		n--;
		
		for (int i=0; i<m; i++) {
			int tam=0;
			for (int j=0; j<n; j++) {
				tam+=a[j][i];
			}
			if (tam>maxc) {
				maxc=tam;
				c=i;
			}
		}
		for (int j=c; j<m-1; j++) {
			for (int i=0; i<n; i++) {
				a[i][j]=a[i][j+1];
			}
		}
		m--;
		printf("Test %d:\n",dem);
		in(a,n,m);
	}
}
