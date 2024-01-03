#include <stdio.h>
//int fbnc(long long n) {
//	if (n==2 || n==1) return 1;
//	
//	return fbnc(n-2) + fbnc(n-1);
//}
main () {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		long long a=1,b=1;
		if (n<4) printf("YES\n");
		else {
			while (a+b<n) {
			long long tam=a;
			a=b;
			b+=tam;
			}
			if (a+b==n) printf("YES\n"); else printf("NO\n");
		}
	}
}
