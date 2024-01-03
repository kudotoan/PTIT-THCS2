#include <stdio.h>
#include <string.h>
void xoaxuongdong(char a[]) {
	int t=strlen(a);
	if (a[t-1]=='\n') {
		a[t-1]='\0';
	}
}

main () {
	int t;
	scanf("%d",&t);
	getchar();
	while (t--) {
		char x[200];
		int dem=0;
		fgets(x,sizeof(x),stdin);
		xoaxuongdong(x);
		if (x[0]!=' ') dem++;
		for (int i=0; i<strlen(x)-1; i++) {
			if (x[i]==' ' && x[i+1]!=' ') dem++;
		}
		printf("%d\n",dem);
	}
}
