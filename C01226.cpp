//#include <stdio.h>
//void swap(int *a, int *b) {
//	int tam=*a;
//	*a=*b;
//	*b=tam;
//}
//void nhap(int a[][100],int n,int m) {
//	for (int i=0; i<n; i++) {
//		for (int j=0; j<m; j++) {
//			scanf("%d",&a[i][j]);
//		}
//	}
//}
//void in(int a[][100],int n, int m) {
//	for (int i=0; i<n; i++) {
//		for (int j=0; j<m; j++) {
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void sort(int a[][100],int n, int m) {
//	//sap xep hang
//	for (int i=0; i<n; i++) {
//		for (int j=0; j<m-1; j++) {
//			for (int k=j+1; k<m; k++) {
//				if (a[i][j]>a[i][k]) swap(&a[i][j],&a[i][k]);
//			}
//		}
//	}
//	//sap xep cot
//	for (int i=0; i<m; i++) {
//		for (int j=0; j<n-1; j++) {
//			for (int k=j+1; k<n; k++) {
//				if (a[j][i]>a[k][i]) swap(&a[j][i],&a[k][i]);
//			}
//		}
//	}
//	//sap xep cheo
// if (m==n) {
//	for (int i=0; i<n-1; i++) {
//		for (int j=i+1; j<n; j++) {
//			if (a[i][i]>a[j][j]) swap(&a[i][i],&a[j][j]);
//		}
//	}
//	for (int i=n-1; i>0; i--) {
//		for (int j=i-1; j>=0; j--) {
//			if (a[n-i-1][i]>a[n-j-1][j]) swap(&a[n-i-1][i],&a[n-j-1][j]);
//		}
//	}
//}
//}
//main () {
//	int t;
//	scanf("%d",&t);
//	for (int dem=1; dem<=t; dem++) {
//		int a[100][100],n,m;
//		scanf("%d%d",&n,&m);
//		nhap(a,n,m);
//		sort(a,n,m);
//		printf("Test %d:\n",dem);
//		in(a,n,m);
//	}
//}


#include <stdio.h>
void swap(int *a, int *b) {
	int tam=*a;
	*a=*b;
	*b=tam;
}
void nhap(int a[][100],int n,int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			scanf("%d",&a[i][j]);
		}
	}
}
void in(int a[][100],int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void sort(int a[][100],int n, int m) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			for (int k=i; k<n; k++) {
				for (int l=j; l<m; l++) {
					if (a[i][j]>a[k][l]) swap (&a[i][j],&a[k][l]);
					printf("\n%d\n",l);
					in(a,n,m);
					printf("\n");
				}
			}
		}
	}
}
main () {
	int t;
	scanf("%d",&t);
	for (int dem=1; dem<=t; dem++) {
		int a[100][100],n,m;
		scanf("%d%d",&n,&m);
		nhap(a,n,m);
		sort(a,n,m);
		printf("Test %d:\n",dem);
		in(a,n,m);
	}
}
