#include <stdio.h>
int gt(int t) {
	int n=1;
	for (int i=1; i<=t; i++) {
		n*=i;
	}	
	return n;
}

int giatri(int a, int b) {
	return gt(a)/(gt(b)*gt(a-b));
}

main () {
	int a;
	scanf("%d",&a);
	for (int i=0; i<a; i++) {
		for (int j=0; j<=i; j++) {
			printf("%d ",giatri(i,j));
		}
	printf("\n");
	}
}
