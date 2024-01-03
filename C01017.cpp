#include<stdio.h>
main(){
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		if (n<=1) printf("NO\n");
		else {
			if (n==2) printf("YES\n");
			if (n>2) {
				int i;
				for (i=2; i<=(n-1); i++) {
					if (n%i==0) {
						printf("NO\n");
						i=n;
					}
					if (i==n-1) printf("YES\n");
				}
			}
		}
	}
	return 0;
}
