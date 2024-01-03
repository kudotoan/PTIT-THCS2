#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	char a[n][n], k=65;
	for (int i=0; i<n; i++) {
		for (int j=i; j<n; j++) {
			a[j][i]=k++;
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<=i; j++) {
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
