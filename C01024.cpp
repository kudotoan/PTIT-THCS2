#include <stdio.h>
main() {
	int a;
	int j=0;
	scanf("%d",&a);
	while (a>0) {
		j++;
		int i=a%10;
		a=(a-i)/10;
	}
	printf("%d",j);
}
