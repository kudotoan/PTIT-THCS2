#include <stdio.h>
#include <math.h>
sostrong(int a) {
	int b=a;
	int t=0;
	while (a>0) {
		int i=a%10, j, fact=1;
		for (j=1; j<=i; j++) {
			fact=fact*j;
		}
		t=t+fact;
		a=(a-i)/10;
	}
	if (t==b) return 1; else return 0;
}

main () {
	int n;
	scanf("%d",&n);
	for (int i=1; i<n; i++) {
		if (sostrong(i)==1) printf("%d ",i);
	}
}
