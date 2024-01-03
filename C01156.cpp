#include <stdio.h>
#include <math.h>
int check2(int n) {
	int a=0,sum=0;
	int b=n;
	while (n>0) {
		int tam=n%10;
		a=a*10+tam;
		sum+=tam;
		n/=10;
	}
	if (a==b && sum%10==0) return 1; else return 0;
}

main () {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int dem=0;
		int a=pow(10,n-1), b=pow(10,n);
		for (int i=a;i<b;i++) {
			if (check2(i)==1) dem++;
		}
		printf("%d\n",dem);
	}
}
