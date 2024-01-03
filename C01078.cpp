#include <stdio.h>
#include <math.h>
int tongchuso(int n) {
	int s=0;
	while (n>0) {
		int i=n%10;
		s+=i;
		n/=10;	
	}
	return s;
}

int tongthuasonguyento (int n) {
	int s=0, i=2;
	while (n!=1) {
		if (n%i==0) {
			int dem=0;
			for (int j=2; j<=sqrt(i); j++) {
				if (i%j==0) dem++;
			}
			if (dem==0) {
				s=s+tongchuso(i);
				n=n/i;
			}
		} else i++;
	}
	return s;
}

main () {
	int n;
	scanf("%d",&n);
	if (tongchuso(n)==tongthuasonguyento(n)) printf("YES"); else printf("NO");
}
