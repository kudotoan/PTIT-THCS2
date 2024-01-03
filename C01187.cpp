#include <stdio.h>
#include <math.h>
int checksnt(int a) {
	if (a<2) return 0;
	for (int i=2; i<=sqrt(a);i++) {
		if (a%i==0) return 0;
	}
	return 1;
}
int sntthu(int a) {
	int s[a];
	int dem=1,snt=2;
	while (dem!=a) {
		snt++;
		if (checksnt(snt)==1) dem++;
	}
	return snt;
}
main () {
	int t;
	scanf("%d",&t);
	for (int d=1; d<=t; d++) {
		int n;
		scanf("%d",&n);
		int luu=n;
		int a[200][200];
		int dem=1,t=1;
		while (dem<luu*luu) {
			for (int i=t; i<n; i++){
				a[t][i]=sntthu(dem++);
			}
			for (int i=t; i<n; i++) {
				a[i][luu-t+1]= sntthu(dem++);
			}
			for (int i=n; i>t; i--) {
				a[luu-t+1][i] = sntthu(dem++);
			}
			for (int i=n; i>t; i--) {
				a[i][t]= sntthu(dem++);
			}
			n--;
			t++;
			if (luu%2!=0 && dem==luu*luu) a[t][t]=sntthu(dem);
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

