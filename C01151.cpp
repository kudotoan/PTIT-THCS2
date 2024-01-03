#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	char a[n][n], k=97;
	for (int i=0; i<n; i++) {
		if (i%2!=0) for (int j=i; j>=0; j--) { 
				a[i][j]=k++;
		} else for (int j=0; j<=i; j++) a[i][j]=k++;
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<=i; j++) {
			printf("%c ",a[i][j]);
		}
		printf("\n");
	}
}
