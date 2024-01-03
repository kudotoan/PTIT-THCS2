#include <stdio.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

main () {
		int n,a,s[100];
		scanf("%d",&n);
		nhapmang(n,s);
		scanf("%d",&a);
		for (int i=n-a; i<n; i++) {
			printf("%d ", s[i]);
		}
		for (int i=0; i<n-a; i++) {
			printf("%d ", s[i]);
		}
}

