#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++) {
		int dem=0;
		for (int j=1; j<=i; j=j+1) {
			dem=dem+j-1;
			printf("%d ",j*n-dem-n+i);
		}
		
		printf("\n");
	}
}
