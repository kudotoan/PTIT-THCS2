#include <stdio.h>

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long n, s[100];
		scanf("%lld",&n);
		s[1]=1;
		s[2]=1;
		for (int i=3; i<=n;i++) {
			s[i]=s[i-1]+ s[i-2];
		};
		printf("%lld\n",s[n]);
	}
}
