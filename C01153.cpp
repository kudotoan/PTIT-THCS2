#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++) {
		for (int j=2; j<=2*i; j=j+2) {
			printf("%c",62+j);
		}
		for (int j=2*i-2; j>=2; j=j-2){
			printf("%c",62+j);
		}
		printf("\n");
	}
}
