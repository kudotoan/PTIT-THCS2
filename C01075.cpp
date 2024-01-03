#include <stdio.h>
#include <math.h>
int souocchan(int a) {
	int dem=0;
	if (a==0) return 0;
	for (int i=1; i<=sqrt(a);i++) {
		if (a%i==0 && i%2==0) dem++;
		if (i*i!=a && a%i==0 && (a/i)%2==0) dem++;
	}
	return dem;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a;
		scanf("%d",&a);
		if (a%2==0) printf("%d\n",souocchan(a)); else printf("0\n");
	}
}
