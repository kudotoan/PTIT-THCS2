#include <stdio.h>
#include <math.h>
int snt(long long n) {
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
		long long n,max;
		scanf("%lld",&n);
		for (int i=1; i<=sqrt(n); i++) {
			if (n%i==0) {
				if (snt(n/i)==1) { 
					max=n/i;
					break;
				}
				if (snt(i)==1) max=i;
			} 
		}
		printf("%lld\n",max);
	}
}
