#include <stdio.h>
#include <math.h>
int snt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) return 0;
	}
	return 1;
}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n, s[100];
		scanf("%d",&n);
		for (int i=1; i<=n;i++) {
			scanf("%d",&s[i]);
		}
		for (int i=1; i<=n;i++) {
			if (snt(s[i])==1) printf("%d ",s[i]);
		}
		printf("\n");
	}
}
