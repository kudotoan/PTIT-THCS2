#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		int s[10]={1,2,5,10,20,50,100,200,500,1000};
		int dem=0;
		for (int i=9; i>=0; i--) {
			if (n>=s[i]) {
				n-=s[i];
				dem++;
				i++;
			}
		}
		printf("%d\n",dem);
	}
}
