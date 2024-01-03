#include <stdio.h>
main() {
	int cr,cc,i;
	scanf("%d%d",&cr,&cc);
	for (i=1; i<=cc; i++) {
		int j;
		for (j=1; j<=cr; j++) {
			if (i==1) {
				if (j==cr) printf("*\n"); else printf("*");
			}
			if (i==cc) printf("*");
			if (i!=1 && i!=cc) {
				if (j==1) printf("*");
				if (j==cr) printf("*\n");
				if (j!=1 && j!=cr) printf(" ");
			}
		}
	}
}
