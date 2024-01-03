#include <stdio.h>
#include <math.h>
int check3uocso(long long n) {
	if (n<2) return 0;
	for (long long i=2;i<=sqrt(n);i++) {
		if (n%i==0) return 0;
	}
	return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long a,b,dem=0;
		scanf("%lld%lld",&a,&b);
		for (long long i=a; i*i<=b; i++) {
			if (check3uocso(i)==1) dem++; 
		}
		printf("%lld\n",dem); 
	}
}





//#include <stdio.h>
//#include <math.h>
//int check3uocso(long long n) {
//	int dem=0;
//	for (long long i=1; i<sqrt(n); i++) {
//		if (n%i==0) dem+=2;
//		if (dem>3) return 0;
//	}
//	long long t=sqrt(n);
//	if (t*t==n) dem++;
//	if (dem==3) return 1; else return 0;
//}
//
//main () {
//	int t;
//	scanf("%d",&t);
//	while (t--) {
//		long long a,b,dem=0;
//		scanf("%lld%lld",&a,&b);
//		for (long long i=a; i<=b; i++) {
//			if (check3uocso(i)==1) dem++; 
//		}
//		printf("%lld\n",dem); 
//	}
//}
