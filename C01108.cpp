#include <stdio.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

main () {
		int n,a,s[100],tam[100],dem=0;
		scanf("%d",&n);
		nhapmang(n,s);
		scanf("%d",&a);
		for (int i=0;i<a;i++) {
			tam[i]=s[i];
		}
		for (int i=0; i<n-a; i++) {
			s[i] = s[i+a];
		}
		for (int i=n-a; i<n; i++) {
			s[i] = tam[dem++];
		}
		for (int i=0; i<n; i++) {
			printf("%d ",s[i]);
		}
}

