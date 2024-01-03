#include<stdio.h>
main(){
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		int i;
		for (i=2; i<=n; i++) {
			if (n%i==0) {
				printf("%d ",i);
				n=n/i;
				i=1;
			}
		}
		printf("\n");		
	}
}
