#include <stdio.h>
#include <math.h>
int snt(int a) {
	if (a==2) return 1;
		else {
			int j=0;
			for (int i=2; i<=sqrt(a);i++) {
				if (a%i==0) j+=1;	
			}
			if (j==0) return 1; else return 0;
	}
}

int divide(int i, int a) {
	int j=0;
	while (a%i==0) {
		j=j+1;
		a=a/i;
	}
	return j;
}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a;
		scanf("%d",&a);
		printf("%d = ",a);
		for (int i=2; i<=a; i++) {
			if (a%i==0 && snt(i)==1) {
			printf("%d^%d",i,divide(i,a));
			a=a/pow(i,divide(i,a));
			if (a!=1) printf(" * "); else printf("\n");;
			}
		}
	}
}
