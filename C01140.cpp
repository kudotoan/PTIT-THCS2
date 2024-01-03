#include <stdio.h>
#include <math.h>
//int snt(int a) {
//	if (a<2) return 0;
//	for (int i=2;i<=sqrt(a);i++) {
//		if (a%i==0) return 0;
//	}
//	return 1;
//}
long long tongnguyento(int a) {
	long long sum=0;
	for (int i=2; i<=sqrt(a); i++) {
		if (a==2) break;
		if (a%i==0) {
			sum+=i;
			a/=i;
			i--;
		}
	}
	return sum+a;
}
main () {
	int t;
	long long sum=0;
	scanf("%d",&t);
	for (int i=1; i<=t; i++) {
		int a;
		scanf("%d",&a);
		sum+=tongnguyento(a);
	}
	printf("%lld",sum);
}
