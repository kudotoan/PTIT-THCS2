#include <stdio.h>
#include <math.h>
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
int snt(int a) {
	if (a<2) return 0;
	for (int i=2; i<=sqrt(a); i++) {
		if (a%i==0) return 0;
	}
	return 1;
}
main () {
	int n;
	scanf("%d",&n);
	int a[n][100];
	nhap(a,n,n);
	int max=0, nho=0;
	for (int i=0; i<n; i++) {
		int tam=0;
		for (int j=0; j<n; j++) {
			if (snt(a[i][j])==1) tam++;
		}
		if (tam>max) {
			max=tam;
			nho=i;
		}
	}
	printf("%d\n",nho+1);
	for (int i=0; i<n; i++) {
		if (snt(a[nho][i])==1) printf("%d ",a[nho][i]);
	}
}
