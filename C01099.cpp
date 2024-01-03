#include <stdio.h>
main () {
	int n, s[100];
	scanf("%d",&n);
	scanf("%d",&s[0]);
	int min=s[0],demmin=0;
	for (int i=1; i<n; i++) {
		scanf("%d",&s[i]);
		if (s[i]<min) {
			min=s[i];
			demmin=i;
		}
	}
	int min1=s[n-1-demmin];
	for (int i=0;i<n;i++) {
		if (min1>s[i] && s[i]!=min) min1=s[i];
	}
	printf("%d %d",min,min1);
}

