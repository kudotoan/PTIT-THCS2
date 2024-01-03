#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	for (int d=1; d<=t; d++) {
		int n;
		scanf("%d",&n);
		int luu=n;
		int a[200][200];
		int dem=luu*luu,t=1;
		while (dem>1) {
			for (int i=t; i<n; i++){
				a[t][i]=dem--;
			}
			for (int i=t; i<n; i++) {
				a[i][luu-t+1]= dem--;
			}
			for (int i=n; i>t; i--) {
				a[luu-t+1][i] = dem--;
			}
			for (int i=n; i>t; i--) {
				a[i][t]= dem--;
			}
			n--;
			t++;
			if (luu%2!=0 && dem==1) a[t][t]=dem;
		}
		printf("Test %d:\n",d);
		for (int i=1; i<=luu; i++){
			for (int j=1; j<=luu; j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
	}
	}
}

