#include<stdio.h>
main () {
	int n,t;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		printf("%.15f\n",(double)1/n);
	}
}
