#include<stdio.h>
main(){
	int a;
	scanf("%d",&a);
	int i,j;
	for (i=1; i<=a; i++) {
		for (j=1; j<=a; j++) {
			if (i==1) {
				if (j!=a) printf("*"); else printf("*\n");
			}
			if (i==a) printf("*");
			if (i!=1 && i!=a) {
				if (j!=1 && j!=a) printf(".");
				if (j==1) printf("*");
				if (j==a) printf("*\n");
			}
		}
	}
}
