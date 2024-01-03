#include <stdio.h>
#include <math.h>

long long fbnc(int a) {
	if (a==1) return 0;
	if (a==2) return 1;
	return fbnc(a-1) + fbnc(a-2);
}
main () {
		int n;
		scanf("%d",&n);
		int luu=n;
		long long a[200][200];
		int dem=1,t=1;
		while (dem<luu*luu) {
			for (int i=t; i<n; i++){
				a[t][i]=fbnc(dem++);
			}
			for (int i=t; i<n; i++) {
				a[i][luu-t+1]= fbnc(dem++);
			}
			for (int i=n; i>t; i--) {
				a[luu-t+1][i] = fbnc(dem++);
			}
			for (int i=n; i>t; i--) {
				a[i][t]= fbnc(dem++);
			}
			n--;
			t++;
			if (luu%2!=0 && dem==luu*luu) a[t][t]=fbnc(dem);
		}
		for (int i=1; i<=luu; i++){
			for (int j=1; j<=luu; j++){
				printf("%lld ",a[i][j]);
			}
			printf("\n");
	}
}

