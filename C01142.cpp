#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	for (int i=1; i<2*n; i++) {
			for (int j=1; j<2*n; j++) {
				if (j==1 || j==(2*n-1)) printf("%d",n); else {
					int bi=n-i, bj=n-j;
					if (bi<0) bi=bi*(-1);
					if (bj<0) bj=bj*(-1);
				if (bj+1>=bi+1) printf("%d",bj+1); else printf("%d",bi+1);
				}
			}	
		printf("\n");
	}
}
