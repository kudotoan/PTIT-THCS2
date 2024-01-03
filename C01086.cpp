#include <stdio.h>
#include <math.h>
int snt(int n) {
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) return 0;
	}
	return 1;
}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		for (int i=1; i<=n/2; i+=2) {
			if (snt(i)==1 && snt(n-i)==1) printf("%d %d ",i,n-i);
		}
		printf("\n");
	}
}
