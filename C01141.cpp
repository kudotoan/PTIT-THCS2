#include <stdio.h>
#include <math.h>
int snt(int a) {
	if (a<2) return 0;
	for (int i=2;i<=sqrt(a);i++) {
		if (a%i==0) return 0;
	}
	return 1;
}

void ktra(long long a, int x[]) {
	while (a>0) {
		int tam=a%10;
		if (snt(tam)==1) {
			x[tam]++;
		}
		a/=10;
	}
	for (int i=2; i<=7; i++) {
		if (x[i]!=0 && snt(i)==1) {
			printf("%d %d\n",i,x[i]);
		}
	}
}

main () {
	long long t;
	int a[9]={};
	scanf("%lld",&t);
	ktra(t,a);
}
