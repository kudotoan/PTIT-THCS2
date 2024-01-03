#include <stdio.h>
#include <string.h>
void xoadaucham(char a[]) {
	a[3]=a[4];
	a[4]=a[5];
	a[5]='\0';
}
int bientangchat(char a[]) {
	if (a[0]<a[1] && a[1]<a[2] && a[2]<a[3] && a[3]<a[4]) return 1;
	return 0;
}
int bienngu(char a[]) {
	if (a[0]==a[1] && a[1]==a[2] && a[2]==a[3] && a[3]==a[4]) return 1;
	return 0;
}
int bahai(char a[]) {
	if (a[0]==a[1] && a[1]==a[2] && a[3]==a[4]) return 1;
	return 0;
}
int bien68(char a[]) {
	for (int i=0; i<strlen(a); i++) {
		if (a[i]!='6' && a[i]!='8') return 0;
	}
	return 1;
}
main () {
	int t;
	scanf("%d",&t);
	getchar();
	for (int dem=1; dem<=t; dem++) {
		char s[50],a[50];
		gets(s);
		char *token=strtok(s," ");
		while (token!=NULL) {
			strcpy(a,token);
			token=strtok(NULL," ");
		}
		xoadaucham(a);
		if (bienngu(a)==1 || bientangchat(a)==1 || bahai(a)==1 || bien68(a)==1) printf("YES\n"); else printf("NO\n");
	}
}
