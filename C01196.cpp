#include <stdio.h>
#include <string.h>
//void tach(char x[101], char luu[][100], int &n) {
//	char *token = strtok(x," ");
//	while (token!=NULL) {
//		strcpy(luu[n],token);
//		n++;
//		token=strtok(NULL," ");
//	}
//}

void sapxep(char luu[][100], int n) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (strcmp(luu[i],luu[j])>0) {
				char tam[100];
				strcpy(tam,luu[i]);
				strcpy(luu[i],luu[j]);
				strcpy(luu[j],tam);
			}
		}
	}
}

main () {
	char x1[101],x2[101];
	gets(x1);
	gets(x2);
	char luu1[100][100], luu2[100][100];
	int n=0,m=0;
	char *token = strtok(x1," ");
	while (token!=NULL) {
		strcpy(luu1[n],token);
		n++;
		token=strtok(NULL," ");
	}
	char *p = strtok(x2," ");
	while (p!=NULL) {
		strcpy(luu2[m],p);
		m++;
		p=strtok(NULL," ");
	}
	sapxep(luu1,n);
	int count[10000]={};
	for (int i=0; i<n; i++) {
		count[i]=1;
		for (int j=0; j<i; j++) {
			if (strcmp(luu1[i],luu1[j])==0) count[i]=0;
		}
	}
	for (int i=0; i<n; i++) {
		if (count[i]==0) continue;
		int kt=1;
		for (int j=0; j<m; j++) {
			if (strcmp(luu1[i],luu2[j])==0) kt=0;
		}
		if (kt==1) printf("%s ",luu1[i]);
	}
}
