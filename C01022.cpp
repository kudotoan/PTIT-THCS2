#include <stdio.h>
main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int i;
	int s=0;
	if (a<=b) {
		for (i=a; i<=b; i++) {
			s+=i;
		}
	}
	else {
		for (i=b; i<=a; i++) {
			s+=i;
		}
	}
	printf("%d\n",s);
}
