#include <stdio.h>
#include <math.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long n,m=0;
		scanf("%lld",&n);
		int dem=0;
		while (n>0) {
			int i=n%10;
			switch(i) {
				case 8: i=0; break;
				case 9: i=0; break; 
			}
			if (i!=0 && i!=1) {
				printf("INVALID\n");
				m=0;
				break;
			}
			dem++;
			m=m+i*pow(10,dem-1);
			n=n/10;
			if (n==0 && m==0) printf("INVALID\n");
		}
	if (m!=0) printf("%lld\n",m);
	}
}
