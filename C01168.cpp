#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	int dem=0;
	printf("Buoc 0: %d\n",b[0]);
	while (dem<n-1) {
		if (b[dem]>a[++dem]) {
			int nho;
			for (int i=0; i<dem; i++) {
				if (b[i]>a[dem]) {
					nho=i;
					break;
				}
			}
			for (int i=dem; i>nho; i--) {
				b[i]=b[i-1];
			}
			b[nho]=a[dem];
		} else b[dem]=a[dem];
		printf("Buoc %d: ",dem);
		for (int i=0; i<dem+1; i++) {
			printf("%d ",b[i]);
		}
	printf("\n");
	}	
}
