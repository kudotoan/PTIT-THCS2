#include<stdio.h>
main(){
	int a;
	scanf("%d",&a);
	int i,j;
	for (i=1; i<=a; i++) {
		for (j=1; j<=a; j++) {
			if (j==a) printf("*\n"); else printf("*");
		}
	}
}
