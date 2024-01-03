#include <stdio.h>
#include <math.h>
int snt(int a) {
	if (a<=1) return 0;
	int j=0;
		for (int i=2; i<=sqrt(a);i++) {
		if (a%i==0) return 0;	
	}
	return 1;
}

int test(int a) {
	while (a>0) {
		int t=a%10;
		if (snt(t)==0) return 0;
		a/=10;
	}
	return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		for (int i=a;i<=b;i++) {
			if (snt(i)==1 && test(i)==1) dem++;
		}
		printf("%d\n",dem);
	}
}
