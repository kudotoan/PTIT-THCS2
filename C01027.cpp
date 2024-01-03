#include <stdio.h>
main() {
	int a,sc;
	scanf("%d",&a);
	sc=a%10;
	while (a>=10) {
		int i=a%10;
		a=(a-i)/10;
	}
	printf("%d %d",a,sc);
}
 
