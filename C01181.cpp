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
		int n;
		scanf("%d",&n);
		int a[100][100];
		nhap(a,n,n);
		for (int i=0; i<n; i++) {
			int tam = a[i][i];
			a[i][i] = a[i][n-i-1];
			a[i][n-i-1]=tam;
		}
		in(a,n,n);
}
