#include <stdio.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n,s[30],dem=0;
		scanf("%d",&n);
		nhapmang(n,s);
		for (int i=0; i<n-1; i++) {
			if (s[i]==s[i+1]) dem++;
		}
		printf("%d\n",dem);
	}
}

