#include <stdio.h>
#include <string.h>
main() {
	char s[100001];
	gets(s);
	int p = 0;
	while (p < strlen(s)) {
		char max = s[p];
		for (int i = p; i < strlen(s); i++) {
			if (max < s[i]) {
				max = s[i];
			}
		}
		for (int i = p; i < strlen(s); i++) {
			if (s[i]==max) {
				printf("%c", s[i]);	
				p=i+1;
			}
		}
	
	}
}

//ababba
