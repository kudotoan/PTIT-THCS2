#include <stdio.h>
main () {
	int n, s[100],kt[10000];
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
		kt[s[i]]++;
	}
	int dem=0;
	for (int i=0; i<n; i++) {
		if (kt[s[i]]==1) dem++;
	}
	printf("%d\n",dem);
	for (int i=0; i<n; i++) {
		if (kt[s[i]]==1) {
			printf("%d ",s[i]);
			kt[s[i]]=0;
		}
	}
}
