#include <stdio.h>
#include <string.h>
void xoaxuongdong (char a[]){
	int len=strlen(a);
	if (a[len-1]='\n') a[len-1]='\0';
}
main () {
	char x[100], tam[100][100];
	fgets(x,sizeof(x),stdin);
	xoaxuongdong(x);
	char *token=strtok(x, " ");
	int dem=0;
	while (token!=NULL) {
	strcpy(tam[dem++],token);	
	token=strtok(NULL, " ");
	}
	int kiemtra[dem];
	for (int i=0; i<dem; i++) kiemtra[i]=1;
	for (int i=0; i<dem-1; i++) {
		for (int j=i+1; j<dem; j++) {
			if (strcmp(tam[i],tam[j])==0) kiemtra[j]=0;
		}
	}
	for (int i=0; i<dem; i++) {
		if (kiemtra[i]!=0) printf("%s ",tam[i]);
	}
}
