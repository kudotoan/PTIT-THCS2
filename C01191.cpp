#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoaxuongdong(char a[]) {
	int len = strlen(a);
	if (a[len-1]=='\n') a[len-1]='\0'; 
}
main () {
	char s[1000],a[100][1000];
	fgets(s,sizeof(s),stdin);
	xoaxuongdong(s);
	for (int i=0; i<strlen(s); i++) {
		s[i]=tolower(s[i]);
	}
	char *token =strtok(s," ");
	int n=0,count[100];
	while (token!=NULL) {
		strcpy(a[n],token);
		count[n]=1;
		n++;
		token=strtok(NULL," ");
	}
	for (int i=0; i<n-1; i++) {
		if (count[i]!=0) {
			for (int j=i+1; j<n; j++) {
				if (strcmp(a[i],a[j])==0 && count[i]!=0) {
					count[i]++;
					count[j]=0;
				}
			}
		} else continue;
	}
	for (int i=0; i<n; i++) {
		if (count[i]!=0) printf("%s %d\n",a[i], count[i]);
	}
}
