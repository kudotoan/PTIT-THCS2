#include <stdio.h>
main() {
	int a,b;
	scanf("%d",&a);
	for (int i=1; i<=2*a-1; i+=2) {
		printf("%c",i+64);
		for (int j=i+2; j<=2*a-1; j+=2) {
			printf("%c",j+64);
		}
			printf("\n");
	}
}

