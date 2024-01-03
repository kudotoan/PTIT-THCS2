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
void swap(int a[][100], int n, int m, int b[][100]) {
	for (int i=0; i<n;i++) {
		for (int j=0; j<m; j++) {
			b[i][j]=a[i][j];
		}
	}
}
void chuyenvi(int a[][100],int n, int m){
	if (n<m) n=m;
	for (int i=0; i<n; i++) {
		for (int j=i; j<n; j++) {
			int tam = a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=tam;
		}
	}
}
void nhan(int a[][100],int n, int m, int b[][100], int c[][100]) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int sum=0;
			for (int k=0; k<m; k++) {
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
}
main () {
	int t;
	scanf("%d",&t);
	for (int dem=1; dem<=t; dem++) {
		int n,a[100][100]={},b[100][100],c[100][100];
		scanf("%d",&n);
		for (int i=0; i<n; i++) {
			int dem=1;
			for (int j=0; j<=i; j++) {
				a[i][j]=dem++;
			}
		}
		swap(a,n,n,b);
		chuyenvi(a,n,n);
		nhan(b,n,n,a,c);
		printf("Test %d:\n",dem);
		in(c,n,n);
	}
}
