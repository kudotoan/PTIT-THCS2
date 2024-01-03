#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	int a[n][2],mindi=50001, minve=50001;
	for (int i=0; i<n; i++) {
		for (int j=0; j<2; j++) {
			scanf("%d",&a[i][j]);
		}
		if (a[i][0]<mindi) mindi=a[i][0];
		if (a[i][1]<minve) minve=a[i][1];
	}
	int sum,sumdi=0, sumve=0;
	for (int i=0; i<n; i++) {
		sumdi+=a[i][0];
		sumve+=a[i][1];
	}
	sum=(sumdi>sumve)?sumdi+minve:sumve+mindi;
	printf("%d",sum);
}
