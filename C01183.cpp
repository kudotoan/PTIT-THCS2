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
void chuyenvi(int a[][100], int n, int m) {
	if (n<m) {
		int tam=n;
		n=m;
		m=tam;
	}
	for (int i=0; i<n; i++) {
		for (int j=i; j<n;j++) {
			int tam=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=tam;
		}
	}
}
void nhan(int a[][100],int n, int m, int b[][100],int c[][100]) {
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
void swap(int a[][100], int n, int m, int b[][100]) {
	for (int i=0; i<n;i++) {
		for (int j=0; j<m; j++) {
			b[i][j]=a[i][j];
		}
	}
}
main () {
	int t;
	scanf("%d",&t);
	for (int dem=1; dem<=t; dem++) {
		int a[100][100],b[100][100],c[100][100],m,n;
		scanf("%d%d",&n,&m);
		nhap(a,n,m);
		swap(a,n,m,b);
		chuyenvi(a,n,m);
		nhan(b,n,m,a,c);
		printf("Test %d:\n",dem);
		in(c,n,n);
	}
}
