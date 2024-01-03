#include <stdio.h>
main () {
	int n,m,p, a[100], b[100];
	scanf("%d%d",&n,&m);
	for (int i=0;i<=n-1;i++) {
		scanf("%d",&a[i]);
	}
	for (int i=0;i<=m-1;i++) {
		scanf("%d",&b[i]);
	}
	scanf("%d",&p);
	for (int i=n-1+m; i>=p+m; i--) {
		a[i]=a[i-m];
	}
	int j=0;
	for (int i=p; i<=p-1+m; i++) {
		a[i]=b[j++];
	}
	for (int i=0; i<=m+n-1; i++){
		printf("%d ",a[i]);
	}
}

