#include <stdio.h>
#include <math.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

int snt(int n) {
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n);i++) {
		if (n%i==0) return 0;
	}
	return 1;
}

main () {
		int n,s[100],dem=0;
		scanf("%d",&n);
		nhapmang(n,s);
		for (int i=0; i<n; i++) {
			if (snt(s[i])==1) dem++;
		}
		printf("%d ",dem);
		for (int i=0;i<n;i++) {
			if (snt(s[i])==1) {
				printf("%d ", s[i]);
			}
		}	
}

