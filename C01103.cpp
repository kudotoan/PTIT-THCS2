#include <stdio.h>
void nhapmang(int n, int s[], int kt[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
		kt[s[i]]++;
	}
}

main () {
	int n,s[100],kt[10000];
	scanf("%d",&n);
	nhapmang(n,s,kt);
	for (int i=0;i<n;i++) {
		if (kt[s[i]]!=0) {
		printf("%d %d\n",s[i],kt[s[i]]);
		kt[s[i]]=0;
		}
	}
}

