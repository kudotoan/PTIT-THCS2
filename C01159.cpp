#include <stdio.h>
#include <math.h>
int check2(int n) {
	int a=0;
	int b=n,kt=1;
	while (n>0) {
		int tam=n%10;
		if (tam==9) kt=0;
		a=a*10+tam;
		n/=10;
	}
	if (a==b && kt==1) return 1; else return 0;
}

main () {
		int n;
		scanf("%d",&n);
		int dem=0;
		for (int i=2;i<n;i++) {
			if (check2(i)==1) {
				printf("%d ",i);
				dem++;
			}
		}
		printf("\n%d",dem);
}
