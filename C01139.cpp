#include <stdio.h>
#include <math.h>
int snt(int a) {
	if (a<2) return 0;
	for (int i=2; i<=sqrt(a); i++) {
		if (a%i==0) return 0;
	}
	return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a;
		scanf("%d",&a);
		int i=2;
		int t=1;
		
		while (snt(a)!=1) {
			if (snt(i)==1) {
				if (a%i==0) {
					while (a%i==0) {
					if (snt(a)==1) break;
					a=a/i;
					}
					t=t*i;
					i++;
				} else i++;
			} else i++;
		}
		if (a!=i-1) t=t*a;
		printf("%d\n",t);
	}
}
