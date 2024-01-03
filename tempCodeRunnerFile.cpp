#include <stdio.h>
main () {
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int lane[1000]={};
	for (int i=1; i<=m; i++) {
		int tam;
		scanf("%d",&tam);
		int dau, cuoi;
		if (tam-k>0) dau=tam-k; else dau=1;
		if (tam+k<n) cuoi=tam+k; else cuoi=n;
		for (int j=dau; j<=cuoi; j++) {
			lane[j]=1;
		}
	}
//	for (int i=1; i<=n; i++) {
//		printf("%d ",lane[i]);
//	}
	int light=0,dem=0;
	for (int i=1; i<=n; i++) {
		if (lane[i]==0) dem++; 
		if (lane[i]!=0 || i==n) {
			if (dem%(2*k+1)==0) light+=dem/(2*k+1); else light+=dem/(2*k+1) +1;
			dem=0;
		}
	}
	printf("%d",light);
}
