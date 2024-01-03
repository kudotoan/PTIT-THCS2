#include <stdio.h>
main() {
	int a;
	int t;
	int j=0;
	scanf("%d",&a);
	while (a>0) {
		j++;
		int i=a%10;
		if (j<2) t=i;
		else t=10*t+i;
		a=(a-i)/10;
	}
	printf("%d",t);
}
