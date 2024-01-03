#include <stdio.h>
int sum(int n, int s[]) {
	int t=0;
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
		t=t+s[i];
	}
	return t;
}
main () {
	int n,s[100];
	scanf("%d",&n);
	printf("%.3f",(float)sum(n,s)/n);
}

