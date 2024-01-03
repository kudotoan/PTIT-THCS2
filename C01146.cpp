#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++) {
		for (int k=n-i; k>0; k--) {
			printf("~");
		}
		for (int j=1; j<=2*i-1; j=j+2) {
			printf("%d",j);
		}
		for (int j=2*i-3; j>=1; j=j-2){
			printf("%d",j);
		}
		printf("\n");
	}
}
