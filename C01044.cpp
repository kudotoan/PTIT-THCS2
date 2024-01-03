#include <stdio.h>
main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=1; i<=a; i++) {
		for (int j=i; j<=b; j++) {
			printf("%d",j);
		}
		if (i>b) {
			printf("%d",i);
			for (int j=1; j<=b-1; j++) {
				printf("%d",i-j);
			}
		} 
		else {
			for (int j=b-1; j>=b+1-i; j--) {
				printf("%d",j);
			}
		}
	printf("\n");
	}
}
