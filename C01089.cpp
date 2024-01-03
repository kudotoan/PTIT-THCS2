#include <stdio.h>
#include <math.h>
int kiemtradaucuoi(long long n) {
	int cuoi=n%10;
	while (n>=10) {
		n/=10;
	}
	if (n==cuoi*2 || cuoi==n*2) return 1; else return 0;
}

int sothuannghich(long long n) {
	int a[18],dem=0,i=0;
	while (n>0) {
	a[i++]=n%10;
	n/=10;
	dem++;
	}
	for (i=0; i<=dem/2; i++) {
		if (a[i]!=a[dem-i-1]) return 0;
	}
	return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		long long n;
		scanf("%lld",&n);
		long long m=n;
		int dem=0;
		while (m>0) {
			dem++;
			m/=10;
		}
		dem--;
		long long k=pow(10,dem);
		m=(n%k)/10;
		if (kiemtradaucuoi(n)==1 && sothuannghich(m)==1) printf ("YES\n"); else printf ("NO\n");
	}
}
