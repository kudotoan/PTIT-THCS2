#include <stdio.h>
main() {
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if (a>=b) {
		for (long long i=b; i>=1; i--) {
			if (a%i==0 && b%i==0) {
				printf("%lld\n",i);
				break;
			}
		}
		for (long long i=1; i<=b; i++) {
			long long t=a*i;
			if (t%b==0) {
				printf("%lld\n",t);
				break;
			} 
		}
	} else {
		for (long long i=a; i>=1; i--) {
			if (a%i==0 && b%i==0) {
				printf("%lld\n",i);
				break;
			}
		}
		for (long long i=1; i<=a; i++) {
			long long t=b*i;
			if (t%a==0) {
				printf("%lld\n",t);
				break;
			}
		}
	}
}

