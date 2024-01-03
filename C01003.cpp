#include<stdio.h>
main () {
	int n,t;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		printf("%lld\n",(long long)n*n);
	}
}
