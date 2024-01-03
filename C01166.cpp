#include <stdio.h>
//sap xep doi cho truc tiep
void sapxep(int n, int a[100]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	for (int i=0; i<n-1; i++) {
		for (int j=i; j<n; j++) {
			if (a[i]>a[j]) {
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	for (int k=0; k<n; k++) printf("%d ",a[k]);
		printf("\n");
}
main () {
	int n, a[100];
	scanf("%d",&n);
	sapxep(n,a);
}
