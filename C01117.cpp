#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	for (int i=1; i<=t; i++) {
		int a[100][100],m,n;
		scanf("%d%d",&n,&m);
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				scanf("%d",&a[i][j]);
			}
		}
		printf("Test %d:\n",i);
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				if (i!=0 && j!=0) printf("%d ",a[i][j]);
			}
			if (i!=0) printf("\n");
		}
	}
}
