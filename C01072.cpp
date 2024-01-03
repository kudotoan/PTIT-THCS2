#include <stdio.h>
int ucln(int a, int b) {
    while (b!=0) {
    	int i=a%b;
	    a=b;
	    b=i;	
	} return a;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if (ucln(a,b)==ucln(c,d)) printf("YES"); else printf("NO");
		printf("\n");
		}
}

