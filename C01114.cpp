#include <stdio.h>
#include <math.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

main () {
		int t;
		scanf("%d",&t);
		while (t--) {
			int n,s[1000];
			scanf("%d",&n);
			nhapmang(n,s);
			for (int i=0; i<n; i++) {
				int test=1;
				for (int j=i+1; j<n; j++) {
					if (s[i] <= s[j]) {
						test=0;
						break;
					}
				}
				if (test==1) printf("%d ", s[i]);
			}
			printf("\n");
		}
		
		
}

