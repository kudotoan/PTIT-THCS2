#include <stdio.h>
main() {
	int a,b;
	scanf("%d",&a);
	for (int i=1; i<=a; i++) {
		int t=a-i+1;
		printf("%c",63+t);
		for (int j=1; j<=a; j++) {
			if(j<a-i+1) printf("%c",63+t+j);
		}
	printf("\n");
	}
}
