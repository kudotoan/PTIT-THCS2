#include <stdio.h>

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n, s[100];
		scanf("%d",&n);
		for (int i=1; i<=n;i++) {
			scanf("%d",&s[i]);
		}
		int max=s[1];
		for (int i=2; i<=n; i++) {
			if (s[i]>max) max=s[i];
		}
		printf("%d\n",max);
		for (int i=1; i<=n; i++) {
			if (s[i]==max) printf("%d ",i-1);
		}
	printf("\n");
	}
}
