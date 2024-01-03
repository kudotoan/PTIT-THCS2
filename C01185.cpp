#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	int luu=n;
	int a[200][200];
	int dem=1,t=1;
	while (dem<luu*luu) {
		for (int i=t; i<n; i++){
			a[t][i]=dem++;
		}
		for (int i=t; i<n; i++) {
			a[i][luu-t+1]= dem++;
		}
		for (int i=n; i>t; i--) {
			a[luu-t+1][i] = dem++;
		}
		for (int i=n; i>t; i--) {
			a[i][t]= dem++;
		}
		n--;
		t++;
		if (luu%2!=0 && dem==luu*luu) a[t][t]=dem++;
	}
	for (int i=1; i<=luu; i++){
		for (int j=1; j<=luu; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
