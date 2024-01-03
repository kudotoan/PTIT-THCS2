#include <stdio.h>
main () {
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int h1,h2;
	scanf("%d%d",&h1,&h2);
	h1--;
	h2--;
	for (int i=0; i<m; i++) {
		int tam=a[h1][i];
		a[h1][i]=a[h2][i];
		a[h2][i]=tam;
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) printf("%d ",a[i][j]);
		printf("\n");
	}
}
