#include <stdio.h>
#include <math.h>
int sogiam(int n) {
	while (n>=10) {
		int i=n%10;
		int j=(n%100)/10;
		if (i>=j) return 0;
		n/=10;
	}
	return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a,b, dem=0;
		scanf("%d%d",&a,&b);
		for (int i=a; i<=b; i++) {
			if (sogiam(i)==1) dem++;
		}	
		printf("%d\n",dem);	
	}
}
