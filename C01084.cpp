#include <stdio.h>
main () {
	int t,a,b,check=0;
	scanf("%d",&t);
	scanf("%d%d",&a,&b);
	int n=t-2;
	while (n--) {
		int c,d;
		scanf("%d%d",&c,&d);
		if ((a!=c && a!=d) && (b!=c && b!=d)) check++;
	}
	if (check==0) printf("Yes"); else printf("No");
}
