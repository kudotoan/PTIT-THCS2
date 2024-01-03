#include<stdio.h>
main(){
	int t;
	scanf("%d",&t);
	while (t--) {
		int a,b;
		scanf("%d%d",&a,&b);
		if (a==0 && b==0) printf("NO\n");
		else {
			if (a!=0) {
				if (b==0) printf("%d\n",a);
				else {
					int i;
					for (i=a; i>=1; i--) {
						if (a%i==0 && b%i==0) {
							printf("%d\n",i);
							i=0;
						}
					}
				}				
			}
			if (b!=0 && a==0) printf("%d\n",b);
		}
	}
}
