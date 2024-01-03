#include <stdio.h>
main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a,sole=0,sochan=0;
		scanf("%d",&a);
		while (a>0) {
		int i=a%10;
		if (i%2==0) sochan+=1; else sole+=1;
		a=(a-i)/10;
	}
	printf("%d %d\n",sole,sochan);
	}
}
