#include <stdio.h>
long long ucln(long long a, long long b) {
	while (b!=0) {
		long long tam=a%b;
		a=b;
		b=tam;
	}
	return a;
}

long long bcnn(long long a,long long b) {
	return (a*b)/ucln(a,b);
}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a;
		scanf("%d",&a);
		long long gcd=1;
		for (int i=2; i<=a; i++) {
			gcd=bcnn(gcd,i);
		}
		printf("%lld\n",gcd);
	}
}
