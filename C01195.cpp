#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuanhoa2(char a[]) {
	char *tam=strtok(a, " ");
	char *token=strtok(NULL," ");
	while (token!=NULL) {
		token[0]=toupper(token[0]);
		for (int i=1; i<strlen(token); i++) {
			token[i]=tolower(token[i]);
		}
		printf("%s",token);
		token=strtok(NULL," ");
		if (token==NULL) printf(","); else printf(" ");
	}
	for (int i=0; i<strlen(tam); i++) tam[i]=toupper(tam[i]);
	printf(" %s\n",tam);
}
main () {
	int t; char hoten[100];
	scanf("%d\n",&t);
	while (t--) {
		gets(hoten);
		chuanhoa2(hoten);
	}
}
