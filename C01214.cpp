#include <stdio.h>
#include <math.h>

int snt(int a) {
	if (a<2) return 0;
	for (int i=2; i<=sqrt(a); i++) {
		if (a%i==0) return 0;
	}
	return 1;
}

int chuso(int a) {
	int sum=0;
	while (a>0) {
		int tam=a%10;
		if (snt(tam)==0) return 0;
		sum+=tam;
		a/=10;
	}
	if (snt(sum)==0) return 0; else return 1;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		for (int i=a; i<=b; i++) {
			if (chuso(i)&&snt(i)) dem++;
		}
		printf("%d\n",dem);
	}
}
