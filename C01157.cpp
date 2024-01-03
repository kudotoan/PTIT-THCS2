#include <stdio.h>
#include <math.h>
int check2(int n) {
	int kt=0, a=0,sum=0;
	int b=n;
	while (n>0) {
		int tam=n%10;
		if (tam==6) kt=1;
		a=a*10+tam;
		sum+=tam;
		n/=10;
	}
		sum=sum%10;
	if (a==b && sum==8 && kt==1) return 1; else return 0;
}

main () {
		int n,m;
		scanf("%d%d",&n,&m);
		if (m<n) {
			int tam=n;
			n=m;
			m=tam; 
		}
		for (int i=n;i<=m;i++) {
			if (check2(i)==1) printf("%d ",i);
		}
}
