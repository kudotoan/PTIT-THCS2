#include <stdio.h>
#include <math.h>
int tongchuso(int t) {
	int s=0;
	while (t>0) {
					int tam=t%10;
					s=s+tam;
					t=t/10;
	}
	return s;
}

main () {
	int a,b;
	scanf("%d%d",&a,&b);
	if (tongchuso(a)<=tongchuso(b)) printf ("%d %d",a,b); else printf("%d %d",b,a);
}

