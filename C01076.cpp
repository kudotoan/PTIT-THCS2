#include <stdio.h>
#include <math.h>

int sothuannghich(long long n) {
    int a[18];
    int i,count = 0;
    while (n>0) {
    	a[count++] = (n % 10);
        n = n / 10;
	}
    for (i = 0; i < (count/2); i++) {
        if (a[i] != a[(count - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

int sole(long long n) {
	int s=0;
	while (n>0) {
		int i=n%10;
		if (i%2==0) return 0;
		s=s+i;
		n=n/10;
	}
	if (s%2==0) return 0; else return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long a;
		scanf("%lld",&a);
		if (sothuannghich(a)==1 && sole(a)==1) printf("YES\n"); else printf("NO\n");
	}
}

