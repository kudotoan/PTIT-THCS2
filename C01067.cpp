#include <stdio.h>
#include <math.h>
int checkfb(int n) {
	int a=1, b=1;
	if (n==1) return 1;
	while (b<n) {
		int i=a+b;
		a=b;
		b=i;
	}
	if (b==n) return 1; else return 0;
}

int snt(int n) {
	if (n==1) return 0;
	int j=0;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) j=j+1;
	}
	if (j==0) return 1; else return 0;
}

main () {
	int a,b;
	scanf("%d%d",&a,&b);
	if (a>b) {
		int j=a;
		a=b;
		b=j;
	}
	for (int i=a; i<=b; i++) {
			if (snt(i)==1) {
				int t=i,s=0;
				while (t>0) {
					int tam=t%10;
					s=s+tam;
					t=t/10;
				}
				if (checkfb(s)==1) printf("%d ",i);
			}
	}
}

