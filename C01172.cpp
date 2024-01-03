#include <stdio.h>
void sapxepchon(int n, int a[]) {
	for (int i=0; i<n-1; i++) {
		int min=a[i];
		int nho=i;
		for (int j=i+1; j<n; j++) {
			if (a[j]<min) {
				min=a[j];
				nho=j;
			}
		}
		a[nho]=a[i];
		a[i]=min;
		for (int i=0; i<n; i++) printf("%d ",a[i]);
		printf("\n");
	}
}
main () {
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	sapxepchon(n,a);
}
