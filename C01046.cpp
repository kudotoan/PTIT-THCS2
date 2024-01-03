#include <stdio.h>
main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if (b>=a) {
		for (int i=b; i>b-a; i--) {
		int t=1;
		for (int j=i; (j>=1); j--) {
			if (t<=b) {
					printf("%d",j);
					t+=1;
			}
		}
		for (int j=2; j<=b-i+1; j++) {
			printf("%d",j);
		}
	printf("\n");
	}
	} else {
		for (int i=a; i>=1; i--) {
		int t=1;
		for (int j=i; (j>=1); j--) {
			if (t<=b) {
					printf("%d",j);
					t+=1;
			}
		}
		for (int j=2; j<=b-i+1; j++) {
			printf("%d",j);
		}
	printf("\n");
	}
}
}

