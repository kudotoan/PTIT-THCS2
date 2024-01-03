#include <stdio.h>
int bcnn(int a, int b) {
	int t=a*b;
	while (b!=0) {
		int tam=a%b;
		a=b;
		b=tam;
	}
	return t/a;
}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		int a[n],b[n+1];
		for (int i=0; i<n; i++) {
			scanf("%d",&a[i]);
		}
		int tmp=1, cnt=0;
		for (int i=0; i<n; i++) {
			b[cnt++]=bcnn(tmp,a[i]);
			tmp=a[i];
		}
		b[cnt]=a[n-1];
		for (int i=0; i<n+1; i++) {
			printf("%d ",b[i]);
		}
		printf("\n");
	}
}
