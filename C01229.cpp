#include <stdio.h>
#include <string.h>
struct word {
	char tu[50];
	int cnt;
};
main () {
	char a[50];
	struct word wordlist[1000];
	int max=0,n=0;
	while (scanf("%s",a)!=EOF) {
		if (strlen(a)<max) continue;
		if (strlen(a)==max) {
			int ok =1;
			for (int i=0; i<n; i++) {
				if (strcmp(a,wordlist[i].tu)==0) {
					ok=0;
					wordlist[i].cnt++;
				}
			}
			if (ok==1) {
				strcpy(wordlist[n].tu,a);
				wordlist[n++].cnt=1;
			}
		}
		if (strlen(a)>max) {
			max=strlen(a);
			n=0;
			strcpy(wordlist[n].tu,a);
			wordlist[n++].cnt=1;
		}
	}
	for (int i=0; i<n; i++) {
		printf("%s %d %d\n",wordlist[i].tu,max,wordlist[i].cnt);
	}
}
