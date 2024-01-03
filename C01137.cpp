#include <stdio.h>
#include <string.h>

int dem(char a, char b[]) {
	int d=0;
	int len=strlen(b);
	for (int i=0; i<len; i++) {
		if (b[i]==a) d++;
	}
	return d;
}

int xoaxuongdong(char a[]) {
	int len=strlen(a);
	if (a[len-1]='\n') a[len-1]='\0';
}
main () {
	char a[1000];
	fgets(a,sizeof(a),stdin);
	xoaxuongdong(a);
	if (dem('(',a)==dem(')',a) && dem('{',a)==dem('}',a) && dem('[',a)==dem(']',a) && dem('\'',a)%2==0 && dem('\"',a)%2==0) printf("1"); else printf("0");
}
