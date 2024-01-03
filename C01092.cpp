#include <stdio.h>
#include <math.h>

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n, s[100];
		scanf("%d",&n);
		for (int i=1; i<=n;i++) {
			scanf("%d",&s[i]);
		};
		int test = 0;
		for (int i=1; i<=n/2;i++) {
			if (s[i]!=s[n-i+1]) test++;
		}
		if (test==0) printf("YES"); else printf ("NO");
		printf("\n");
	}
}
