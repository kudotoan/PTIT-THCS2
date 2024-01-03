#include <stdio.h>
void reup(int a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i]>a[j]) {
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
void redown(int a[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i]<a[j]) {
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}

main () {
	int t;
	scanf("%d",&t);
	for (int dem=1; dem<=t; dem++) {
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
		}
		for (int i=0; i<n; i++) {
		scanf("%d",&b[i]);
	}
		reup(a,n);
		redown(b,n);
		printf("Test %d:\n",dem);
		for (int i=0; i<2*n;i++) {
			if (i%2==0) printf("%d ",a[i/2]);
			if (i%2!=0) printf("%d ",b[(i-1)/2]);
		}
		printf("\n");
	}
}
