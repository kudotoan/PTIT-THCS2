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
	for (int i=2; i<=sqrt(a);i++) {
		if (a%i==0) return 0;
	}
	return 1;
}

main () {
		int n;
		scanf("%d",&n);
		int a[100][100];
		nhap(a,n,n);
		int tong=0;
		for (int i=0; i<n; i++) {
			for (int j=i; j<n; j++) {
				if (snt(a[i][j])==1) tong+=a[i][j];
			}
		}
		printf("%d",tong);
}
