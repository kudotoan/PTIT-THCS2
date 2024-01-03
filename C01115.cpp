#include <stdio.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

main () {
	int n,s[100],kt[10000], count[10000];
	scanf("%d",&n);
	nhapmang(n,s);
	for (int i=0; i<n; i++) {
		kt[s[i]]++;
		count[s[i]]++;
	}
	int dem=0;
	for (int i=0;i<n;i++) {
		if (count[s[i]]>1) {
			dem++;
			count[s[i]]=0;
		}
	}
	printf("%d\n",dem);
	for (int i=0; i<n; i++) {
		if (kt[s[i]]>1) {
			printf("%d ",s[i]);
			kt[s[i]]=0;
		}
		
	}
}
