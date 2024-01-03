#include <stdio.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

main () {
	int t,dem=1;
	scanf("%d",&t);
	while (t--) {
		int n,s[100],kt[100000]={};
		scanf("%d",&n);
		nhapmang(n,s);
		for (int i=0; i<n; i++) {
			kt[s[i]]++;
		}
		printf("Test %d:\n",dem++);
		for (int i=0;i<n;i++) {
			if (kt[s[i]]!=0) {
			printf("%d xuat hien %d lan\n",s[i],kt[s[i]]);
			kt[s[i]]=0;
			}
		}
	}
	
}

