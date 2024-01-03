#include <stdio.h>
#include <string.h>
main() {
	int n;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) {
		char s[1005];
		gets(s);
		int kt = 0, a[1005] = {};
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] < '0' || s[i] > '9' || s[0] == '0') kt = 1;
		}
		if (kt==1) {
			printf("INVALID\n");
			continue;
		}
		
		for (int i = 0; i < strlen(s); i++) {
			if (a[s[i]]==0) {
				a[s[i]] = 1;
				kt++;
				}
		}
			
		if (kt == 10) printf("YES\n"); else printf("NO\n"); 
	} 
		
}
