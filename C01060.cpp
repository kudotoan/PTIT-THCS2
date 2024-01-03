#include <stdio.h>
#include <math.h>
sohoanhao(int a) {
	int t=0, cb2=sqrt(a);
	for (int i=2;i<=cb2;i++) {
		if (a%i==0) {
		t=t+i+a/i;	
		}
	}
	if (cb2*cb2==a) t=t+cb2+1; else t=t+1;
	if (t==a) return 1; else return 0;
}

main () {
	int t;
	scanf("%d",&t);
	for (int i=1; i<t; i++) {
		if (sohoanhao(i)==1) printf("%d ",i);
	}
}
