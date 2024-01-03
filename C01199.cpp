#include <stdio.h>
#include <string.h>
#include <ctype.h>
main () {
	int t;
	scanf("%d\n",&t);
	for (int dem=1; dem<=t; dem++) {
		char x1[201],x2[21];
		gets(x1);
		gets(x2);
		char xss[201];
		strcpy(xss,x1);
		for (int i=0; i<strlen(xss); i++) {
			xss[i]=tolower(xss[i]);
		}
		for (int i=0; i<strlen(x2); i++) {
			x2[i]=tolower(x2[i]);
		}
		//tach xau
		char luu1[200][201];
		int n=0;
		char *token = strtok(x1," ");
		int count[10000]={};
		while (token!=NULL) {
			strcpy(luu1[n],token);
			count[n]=1;
			n++;
			token=strtok(NULL," ");
		}
		//kiem tra
		n=0;
		char *p = strtok(xss," ");
		while (p!=NULL) {
			if (strcmp(p,x2)==0) count[n]=0;
			n++;
			p=strtok(NULL," ");
		}
		//in ket qua
		printf("Test %d:",dem);
		for (int i=0; i<n; i++) {
			if (count[i]==0) continue;
			printf(" %s",luu1[i]);
		}
		if (dem<t) printf("\n");
	}
}
