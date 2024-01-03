#include <stdio.h>
main () {
	int t;
	scanf("%d",&t);
	int dem=1;
	while (t--) {
		int n,m,p, a[100], b[100];
		scanf("%d%d%d",&n,&m,&p);
		for (int i=0;i<=n-1;i++) {
			scanf("%d",&a[i]);
		}
		for (int i=0;i<=m-1;i++) {
			scanf("%d",&b[i]);
		}
		for (int i=n-1+m; i>=p+m; i--) {
			a[i]=a[i-m];
		}
		int j=0;
		for (int i=p; i<=p+m-1; i++) {
			a[i]=b[j++];
		}
		printf("Test %d:\n",dem++);
		for (int i=0; i<=m+n-1; i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}

