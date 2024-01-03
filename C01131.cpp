#include <stdio.h>

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a[100][100];
		int n,m,x;
		scanf("%d%d%d",&n,&m,&x);
		for (int i=0; i<n; i++) {
			for (int j=0; j<m;j++) {
				scanf("%d",&a[i][j]);
			}
		}
		x=x-1;
		for (int i=0; i<n-1; i++) {
			for (int j=i+1; j<n; j++) {
				if (a[i][x]>a[j][x]) {
					int tam=a[i][x];
					a[i][x]=a[j][x];
					a[j][x]=tam;
				}
			}
		}
		for (int i=0; i<n; i++) {
			for (int j =0; j<m; j++) {
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	}
}
