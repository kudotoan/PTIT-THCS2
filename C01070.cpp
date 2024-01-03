#include <stdio.h>
int kiemtra(long long a) {
	if (a%2!=0) return 0; else {
		while (a>0) {
			int tam=a%10;
			if (tam%2!=0) return 0;
			a=a/10;
		}
		return 1;
	}
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long a;
		scanf("%lld",&a);
		if (kiemtra(a)==1) printf("YES\n"); else printf("NO\n");
	}
	
	
}
