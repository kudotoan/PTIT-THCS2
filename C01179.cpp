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
	for (int i=0; i<n; i++) {
		int tam=a[i][h1];
		a[i][h1]=a[i][h2];
		a[i][h2]=tam;
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) printf("%d ",a[i][j]);
		printf("\n");
	}
}
