#include <stdio.h>
#include <string.h>
struct word {
	char a[1000];
	int num;
};

	struct word listword[1000];
	char a[1000];
	
int checktn(char a[]) {
	for (int i=0; i<strlen(a)/2; i++) {
		if (a[i]!=a[strlen(a)-i-1]) return 0;
	}
	return 1;
}

main () {
	int max=0, n=0;
	while (scanf("%s",a)!=EOF) {
		if (checktn(a)==0 || strlen(a)<max) continue;
		int ok=1;
		if (max<strlen(a)) {
			n=0;
			max=strlen(a);	
		}
		for (int i=0; i<n; i++) {
			if (strcmp(listword[i].a,a)==0) {
				listword[i].num++;
				ok=0;
			}
		}
		
		if (ok==1) {
			strcpy(listword[n].a,a);
			listword[n++].num=1;
		}		
	}
	for (int i=0; i<n; i++) {
		printf("%s %d\n",listword[i].a,listword[i].num);	
	}
}
