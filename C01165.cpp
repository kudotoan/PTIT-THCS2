#include <stdio.h>
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
}
main () {
	int n, a[100];
	scanf("%d",&n);
	sapxep(n,a);
	for (int i=0; i<n; i++) {
		if (a[i]%2==0) printf("%d ",a[i]);
	}
	for (int i=0; i<n; i++) {
		if (a[i]%2!=0) printf("%d ",a[i]);
	}
}
