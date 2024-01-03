#include <stdio.h>
#include <string.h>
main () {
	int t;
	scanf("%d",&t);
	getchar();
	while (t--) {
		char a[100];
		gets(a);
		int len=strlen(a);
		for (int i=0; i<len; i++) {
			int dem=1;
			for (int j=i+1; j<len; j++) {
				if (a[i]==a[j]) dem++; else {
					break;
				}
			}
			printf("%c%d",a[i],dem);
			i=i+dem-1;
		}
		printf("\n");
	}
}
