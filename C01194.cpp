#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuanhoa(char a[]) {
	char *token=strtok(a, " ");
	while (token!=NULL) {
		token[0]=toupper(token[0]);
		for (int i=1; i<strlen(token); i++) {
			token[i]=tolower(token[i]);
		}
		printf("%s ",token);
		token=strtok(NULL," ");
	}
	printf("\n");
}
main () {
	int t; char hoten[100];
	scanf("%d\n",&t);
	while (t--) {
		gets(hoten);
		chuanhoa(hoten);
	}
}
