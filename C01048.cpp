#include <stdio.h>
main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=1; i<=a; i++) {
		for (int j=i; j<=b; j++) {
			printf("%c",j+64);
		}
		if (i<=b) {
			for (int j=i-1; j>=1; j--) {
				printf("%c",j+64);
			}
		} else {
			for (int j=b; j>=1; j--) {
				printf("%c",j+64);
			}
		}
		
	printf("\n");
	}
}
