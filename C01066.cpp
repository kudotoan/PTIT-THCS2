#include<stdio.h>
long long ucln(long long a, long long b)
{
    while (b!=0) {
    	long long i=a%b;
	    a=b;
	    b=i;	
	} return a;
}
main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long a,b;
	   	scanf("%lld%lld",&a,&b);
	   	printf("%lld %lld\n",a*b/ucln(a,b),ucln(a,b));
	}
} 

