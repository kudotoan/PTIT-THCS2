#include <stdio.h>
#include <math.h>

int testsokhonggiam(int a) {
	while (a>0) {
		int m = a%10;
		int n = (a%100-n)/10;
		if (m<n) return 0;
		a=a/10;
	}
	return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a, m,n;
		scanf("%d",&a);
		m=pow(10,a-1);
		n=pow(10,a);
		for (int i=m; i<n; i++) {
			if (testsokhonggiam(i)==1) printf("%d ",i);
		}
		printf("\n");
	}
}
