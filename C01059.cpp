#include <stdio.h>
#include <math.h>
int snt(int a) {
	if (a==2) return 1;
		else {
			int j=0;
			for (int i=2; i<=sqrt(a);i++) {
				if (a%i==0) j+=1;	
			}
			if (j==0) return 1; else return 0;
	}
}

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

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int a,b,dem=0;
		scanf("%d%d",&a,&b);
		for (int i=a; i<=b; i++) {
			if(snt(i)==1 && sothuannghich(i)==1) {
				printf("%d ",i);
				dem++;
				if (dem==10) {
					printf("\n");
					dem=0;
				}
			}
		}
		printf("\n");
		printf("\n");
	}
}

