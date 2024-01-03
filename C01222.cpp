#include <stdio.h>
#include <math.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		long long a[n];
		for (int i=0; i<n; i++) {
			scanf("%lld",&a[i]);
			a[i]*=a[i];
		}
		int kt=0;	
		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				long long x=a[i]+a[j];
				if (sqrt(x)==(int)(sqrt(x))) {
					for (int k=0; k<n; k++) {
						if (k==i || k==j) continue;
						if (a[k]==x) {
							printf("YES\n");
							kt=1;
							break;
						}
					}
				}
				if (kt==1) break;
			}
			if (kt==1) break;
		}
		if (kt==0) printf("NO\n");	
	}	
}
