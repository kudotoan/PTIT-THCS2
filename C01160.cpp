#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n,p,x=0;
		scanf("%d%d",&n,&p);
		int i=2;
		while (i<=n) {
			int j=i;
			while (j%p==0) {
				if (j==0) break;
				x++;
				j=j/p;
			}
			i++;
		}
		printf("%d\n",x);
	}
}
