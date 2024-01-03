#include <stdio.h>
#include <math.h>
long long biendoinhonhat(long long n) {
	long long dem=0,tam=n;
	while (tam>0) {
		tam/=10;
		dem++;
	}
	long long nnew=0;
	dem=dem-1;
	while (n>0) {
		long long a=pow(10,dem);
		int t=n/a;
		if (t==6) t=5;
		nnew=nnew+t*a;
		n=n%a;
		dem--;
	}
	return nnew;
}

long long biendoilonnhat(long long n) {
	long long dem=0,tam=n;
	while (tam>0) {
		tam/=10;
		dem++;
	}
	long long nnew=0;
	dem=dem-1;
	while (n>0) {
		long long a=pow(10,dem);
		int t=n/a;
		if (t==5) t=6;
		nnew=nnew+t*a;
		n=n%a;
		dem--;
	}
	return nnew;
}


main () {
	int t;
	scanf("%lld",&t);
	while (t--) {
		long long a,b;
		scanf("%lld%lld",&a,&b);
		printf("%lld %lld\n",biendoinhonhat(a)+biendoinhonhat(b),biendoilonnhat(a)+biendoilonnhat(b));
	}
}
