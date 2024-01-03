#include <stdio.h>
#include <string.h>
main () {
	char x[105];
	int max=0;
	char nho[105];
	while (scanf("%s",x)!=EOF) {
		
		if (max<strlen(x)) {
			max=strlen(x);
			strcpy(nho,x);
		}
	}
	printf("%s - %d",nho,max);
}
