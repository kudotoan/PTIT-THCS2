#include <stdio.h>
#include <string.h>
int kiemtra(char a) {
	if (a=='0' || a=='1' || a=='2') return 1;
	return 0;
}
main () {
	int t;
	scanf("%d",&t);
	getchar();
	while(t--) {
		char a[18];
		scanf("%s",a);
		int test=1;
		for (int i=0; i<strlen(a)-1; i++) {
			if (kiemtra(a[i])==0) {
				test=0;
				break;
			}
		}
		if (test==1) printf("YES\n"); else printf("NO\n");	
	}
}
