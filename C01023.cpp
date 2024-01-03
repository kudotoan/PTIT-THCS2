#include <stdio.h>
main() {
	int a,b,length,sd,sc;
	scanf("%d",&a);
	b=a;
	sd=a%10;
	length=1;
	while (a>=10) {
		int i=a%10;
		a=(a-i)/10;
		length*=10;
	}
	sc=a;
	printf("%d %d\n",sd,sc);
	int t=sd*length + b%length - b%10 + sc; 
	printf("%d",t);
}
 
