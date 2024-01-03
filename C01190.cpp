#include <stdio.h>
main () {
	int n;
	scanf("%d",&n); 
	int m1=1000000,m2=1000000;
	for (int i=1; i<=n; i++) {
		int a,b;
		scanf("%d%d",&a,&b);
		if (m1>a) m1=a;
		if (m2>b) m2=b;
//		printf("%d %d\n",m1,m2);
	}
	printf("%lld",(long long)m1*m2);
}
