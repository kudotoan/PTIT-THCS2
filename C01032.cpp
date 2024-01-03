#include<stdio.h>
main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long a;
		scanf("%lld",&a);
		while (a>0) {
			long long i=a%10;
			long long b=(a-i)/10;
			long long j=b%10;
			if (j>i) {
				printf("NO\n");
				break;
			}
			a=b;
			if (a==0) printf("YES\n");
		}

	}
}
