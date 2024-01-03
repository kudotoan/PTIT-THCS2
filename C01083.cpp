#include <stdio.h>
int demsochanle(long long n) {
	int chan=0, le=0;
	while (n>0) {
		int i=n%10;
		if (i%2==0) chan++; else le++;
		n/=10;
	}
	if (chan<=le) return 1; else return 0;
}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long n;
		scanf("%lld",&n);
		if (n%2!=0 && demsochanle(n)==1) printf("YES\n"); else printf("NO\n");
	}
}
