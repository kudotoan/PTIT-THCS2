#include <stdio.h>
#include <math.h>
int sothuannghich(int n) {
	int a[7];
    int i,count = 0;
    while (n>0) {
    	a[count++] = (n % 10);
        n = n / 10;
	}
    for (i = 0; i < (count/2); i++) {
        if (a[i] != a[(count - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

int tongchuso (int n) {
	int s=0;
	while (n>0) {
		int i=n%10;
		if (i==4) return 0;
		s+=i;
		n/=10;
	}
	if (s%10==0) return 1; else return 0;
}

main () {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a;
		scanf("%d",&a);
		for (int i=pow(10,a-1); i<pow(10,a); i++) {
			if (sothuannghich(i)==1 && tongchuso(i)==1) printf("%d ",i);
		}
		printf("\n");
	}
}
