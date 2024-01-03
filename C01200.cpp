#include <stdio.h>
#include <string.h>
int kiemtra(char c[]) {
	for (int i=0; i<strlen(c); i++) {
		if (c[i]<'0' || c[i]>'9') return 0;
	}
	if (c[0]=='0') return 0;
	return 1;
}

int uuthe(char a[]) {
	int dc=0, dl=0;
	for (int i=0; i<strlen(a); i++) {
		if (a[i]%2==0) dc++; else dl++;
	}
	if (strlen(a)%2==0 && dc>dl) return 1;
	if (strlen(a)%2!=0 && dl>dc) return 1;
	return 0;
}

main () {
	int t;
	scanf("%d\n",&t);
	while (t--) {
		char x[1000];
		gets(x);
		if (kiemtra(x)==0) {
			printf("INVALID\n");
			continue;
		}
		if (uuthe(x)) printf("YES\n"); else printf("NO\n");
	}
}
