#include <stdio.h>

main () {
		int n, s[100];
		scanf("%d",&n);
		n=n-1;
		for (int i=0; i<=n;i++) {
			scanf("%d",&s[i]);
		}
		for (int i=n; i>=0; i--) {
			printf("%d ",s[i]);
		}
}
