#include <stdio.h>
main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=a; i>=1; i--) {
			for (int j=i; j<=b; j++) {
				printf("%c",64+j);
			}
			for (int j=1; j<i; j++) {
				if (j<=b) {
					printf("%c",64+b);
				}
			}
	printf("\n");
	}
}
