#include<stdio.h>
main(){
	int a;
	scanf("%d",&a);
	int i,j;
	for (i=1; i<=a; i++) {
		for (j=1; j<=(a+a-i); j++) {
			if (j<(a-i+1)) printf("~");
			if (i==1) {
				if (j>=(a-i+1) && j<(a+a-i)) printf("*");
				if (j==(a+a-i)) printf("*\n");
			}
			if (i==a) printf("*");
			if (i!=1 && i!=a) {
				if (j==(a-i+1)) printf("*");
				if (j==(a+a-i)) printf("*\n");
				if (j>=(a-i+1) && j!=(a-i+1) && j!=(a+a-i)) printf(".");
			}
		}
	}
}
