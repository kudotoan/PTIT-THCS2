#include <stdio.h>
#include <string.h>
#include <ctype.h>
main () {
	char ten[51];
	gets(ten);
	char *token=strtok(ten," ");
	char tam[50];
	while (token!=NULL) {
		strcpy(tam,token);
		token[0]=tolower(token[0]);
		printf("%c",token[0]);
		token=strtok(NULL," ");
	}
	for (int i=1; i<strlen(tam); i++) {
		tam[i]=tolower(tam[i]);
		printf("%c",tam[i]);
	}
	printf("@ptit.edu.vn");
}
