#include <stdio.h>
main() {
	int a,i;
	scanf("%d",&a);
	int t=0;
	for (i=1;i<a;i++) {
		if (a%i==0) {
		t=t+i;	
		}
	}
	if (t==a) printf("1"); else printf("0");
}
