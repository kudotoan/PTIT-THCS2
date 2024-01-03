#include<stdio.h>
main() {
	int a,b,max;
	scanf("%d%d",&a,&b);
	if (a>b) max=a; else max=b;
	for (int i=1; i<=a; i++) {
		int t=max+96;
		for (int j=1;j<=b; j++) {
			if (i>j) {
				printf("%c",t);
				t=t-1;
			} else printf("%c",t);
		}
	printf("\n");
	}
}
