#include <stdio.h>
#include <string.h>
void xoaxuongdong(char a[]) {
	int t=strlen(a);
	if (a[t-1]=='\n') {
		a[t-1]='\0';
	}
}

int kiemtrachu(char a) {
	for (int i=0; i<26; i++) {
		if (a==65+i || a==97+i) return 1;
	}
	return 0;
}

int kiemtraso(char a) {
	for (int i=0; i<10; i++) {
		if (a==48+i) return 1;
	}
	return 0;
}

main () {
		char x[200];
		int demchu=0, demso=0, demkhac=0;
		fgets(x,sizeof(x),stdin);
		xoaxuongdong(x);
		for (int i=0; i<strlen(x); i++) {
			if (kiemtrachu(x[i])==1) demchu++;
			if (kiemtraso(x[i])==1) demso++;
			if (kiemtrachu(x[i])==0 && kiemtraso(x[i])==0) demkhac++;
 		}
		printf("%d %d %d",demchu,demso,demkhac);
}
