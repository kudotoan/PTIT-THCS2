#include <stdio.h>
main() {
	int a;
	scanf("%d",&a);
	int b=a;
	int t=0;
	while (a>0) {
		int i=a%10;
		int j;
		int fact=1;
		for (j=1; j<=i; j++) {
			fact=fact*j;
		}
		t=t+fact;
		a=(a-i)/10;
	}
	if (t==b) printf("1"); else printf("0");
}
