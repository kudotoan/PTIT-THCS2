#include <stdio.h>
void nhapmang(int n,int s[]) {
	for (int i=0;i<n;i++) {
		scanf("%d",&s[i]);
		}
}

int demmang(int n, int s[]) {
	int dem=1;
	for (int i=1; i<n; i++) {
		int kt=1;
		for (int j=0; j<i; j++) {
			if (s[j]>s[i]) kt=0;
		}
		if (kt==1) dem++;
	}
	return dem;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n,s[50];
		scanf("%d",&n);
		int dem=1;
		nhapmang(n,s);
		printf("%d\n",demmang(n,s));
	}
}


