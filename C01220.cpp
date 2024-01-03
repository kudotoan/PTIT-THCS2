#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i=0; i<n; i++) {
			scanf("%d",&a[i]);
		}
		int kt=0,nho;
		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				if (a[i]==a[j]) {
					kt=1;
					nho=a[i];
				}
			}
			if (kt==1) break;
		}
		if (kt==1) printf("%d\n",nho); else printf("NO\n");
	}
}
