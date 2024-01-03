#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct dathuc {
	int heso;
};
struct dathuc list[10001];
int max=0;
int min=100000;

void khoitao() {
	for (int i=0; i<=10000; i++) list[i].heso=0;
}

int getHeSo(char a[]) {
	for (int i=0; i<strlen(a); i++) {
		if (a[i]=='*') {
			a[i]='\0';
			break;
		}
	}
	int b=atoi(a);
	return b;
}
int getMu(char a[]) {
	int i;
	for (i=0; i<strlen(a); i++) {
		if (a[i]=='^') break;
	}
	char* p=a;
	int tmp=atoi(p+i+1);
	return tmp;
}

main () {
	int t;
	scanf("%d",&t);
	getchar();
	while (t--) {
		khoitao();
		char x1[1000];
		char x2[1000];
		gets(x1);
		gets(x2);
		// xu ly xau 1;
		char *token=strtok(x1," +");
		while (token!=NULL) {
			char tmp[1000];
			char tmp1[1000];
			strcpy(tmp,token);
			strcpy(tmp1,token);
			int d=getMu(tmp1);
			if (max<d) max=d;
			if (min>d) min=d;
			list[d].heso+=getHeSo(tmp);
			token=strtok(NULL," +");
		}
		// xu ly xau 2;
		char *p=strtok(x2," +");
		while (p!=NULL) {
			char tmp[1000];
			char tmp1[1000];
			strcpy(tmp,p);
			strcpy(tmp1,p);
			int d=getMu(tmp1);
			if (max<d) max=d;
			if (min>d) min=d;
			list[d].heso+=getHeSo(tmp);
			p=strtok(NULL," +");
		}
		for (int i=max; i>=min; i--) {
			if (list[i].heso!=0)
			if (i!=min) {
				printf("%d*x^%d + ",list[i].heso,i);
			} else printf("%d*x^%d\n",list[i].heso,i);
		}
	}
}
