#include <stdio.h>
void nhanmatran(int a[][100], int b[][100], int c[][100], int n, int m, int p) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<p; j++) {
			int sum=0;
			for (int k=0; k<m; k++) {
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
}
main () {
		int n,m,p,q;
		scanf("%d%d%d%d",&n,&m,&p,&q);
		int a[n][100], b[m][100], c[p][100], ab[n][100],abc[n][100];
// nhap 3 ma tran
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		for (int i=0; i<m; i++) {
			for (int j=0; j<p; j++) {
				scanf("%d", &b[i][j]);
			}
		}
		for (int i=0; i<p; i++) {
			for (int j=0; j<q; j++) {
				scanf("%d", &c[i][j]);
			}
		}
//		for (int i=0; i<n; i++) {
//			for (int j=0; j<p; j++) {
//				int sum=0;
//				for (int k=0; k<m; k++) {
//					sum+=a[i][k]*b[k][j];
//				}
//				ab[i][j]=sum;
//			}
//		}
		nhanmatran(a,b,ab,n,m,p);
		nhanmatran(ab,c,abc,n,p,q);
		for (int i=0; i<n; i++) {
			for (int j=0; j<q; j++) {
				printf("%d ",abc[i][j]);
			}
			printf("\n");
		}
}
