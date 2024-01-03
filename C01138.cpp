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
	int a;
	scanf("%d",&a);
	int i=2;
	while (snt(a)!=1) {
		if (snt(i)==1) {
			if (a%i==0) {
				if (snt(a/i)==1) {
					a=a/i;
					printf("%dx%d",i,a);	
				} else {
					a=a/i;
					printf("%dx",i);
				}
			} else i++;
		} else i++;
		
	}
}
