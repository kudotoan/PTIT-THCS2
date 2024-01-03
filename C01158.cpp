#include <stdio.h>
#include <math.h>
int snt(int n) {
	if (n<2) return 0;
	 for (int i=2; i<=sqrt(n); i++) {
	 	if (n%i==0) return 0;
	 }
	 return 1;
}
int chiahetcho5(int n) {
	int sum=0;
	while (n>0) {
		int tam=n%10;
		sum+=tam;
		n/=10;
	}
	if (sum%5==0) return 1; else return 0;
}

main () {
		int n;
		scanf("%d",&n);
		int dem=0;
		for (int i=5;i<n;i++) {
			if (snt(i)==1 && chiahetcho5(i)==1) {
				printf("%d ",i);
				dem++;
			}
		}
		printf("\n%d",dem);
}
