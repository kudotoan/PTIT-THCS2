#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n,m;
		scanf("%d%d",&n,&m);
		int a[n][m];
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				scanf("%d",&a[i][j]);
			}
		}
		int c=0,h=0;
		int dem=0,s=n*m;
		while (dem<s) {
			for (int i=c; i<m-c-1; i++) {
				printf("%d ",a[h][i]);
				dem++;
				if (dem>=s) break;
			}
			if (dem>=s) break;
			for (int i=h; i<n-h-1; i++) {
				printf("%d ",a[i][m-c-1]); dem++;
				if (dem>=s) break;
			}
			if (dem>=s) break;
			for (int i=m-c-1; i>c; i--) {
				printf("%d ",a[n-h-1][i]); dem++;
				if (dem>=s) break;
			}
			if (dem>=s) break;
			for (int i=n-h-1; i>h; i--) {
				printf("%d ",a[i][c]); dem++;
				if (dem>=s) break;
			}
			if (dem>=s) break;
			c++;
			h++;
			if (dem+1==n*m) {
				printf("%d",a[h][c]);
				dem++;
			} 
		}
		printf("\n");
	}
}
