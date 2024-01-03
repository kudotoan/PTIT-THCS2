#include <stdio.h>
main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=1; i<=a; i++) {
		for (int j=i; j<=b; j++) {
			printf("%c",63+j);
		}
		
		for (int j=1; j<i; j++) {
			if (j<=b) printf("%c",63+b);
		}

	printf("\n");
	}
}
