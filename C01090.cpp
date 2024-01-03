#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n,s[100];
		scanf("%d",&n);
		for (int i=1; i<=n; i++) {
			scanf("%d",&s[i]);
		}
		for (int i=1; i<=n; i++) {
			if (s[i]%2==0) printf("%d ",s[i]);
		}
		printf("\n");
	}
}
