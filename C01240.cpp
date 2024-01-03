#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char gen[300][300];
int len;

void generator(char s1[]) {
	int i = 0;
	char s[300];
	strcpy(s, s1);
	len = strlen(s);
	strcpy(gen[i++], s);

	while (i < len) {
		char c = s[0];
		for (int j = 0; j <= len - 2; j++) {
			s[j] = s[j + 1];
		}
		s[len - 1] = c;
		strcpy(gen[i++], s);
	}
}

void prod(char s1[], char s2[], char s3[]) {
	int c[300] = { 0 };
	for (int i = strlen(s1) - 1; i >= 0; i--) {
		for (int j = strlen(s2) - 1; j >= 0; j--) {
			int a = s1[i] - '0';
			int b = s2[j] - '0';
			c[i + j] = c[i + j] + a * b;
		}
	}
	s3[0] = '0';
	for (int i = strlen(s1) + strlen(s2) - 1 - 1; i >= 1; i--) {
		c[i - 1] = c[i - 1] + (c[i] / 10);
		c[i] = c[i] % 10;
		s3[i + 1] = (char)(c[i] + '0');
	}
	s3[1] = (char)(c[0] % 10 + '0');
	s3[0] = (char)(c[0] / 10 + '0');
	int len3 = strlen(s1) + strlen(s2) - 1;
	int cntZero2 = 0;
	for (cntZero2 = 0; cntZero2 < strlen(s1); cntZero2++) {
		if (s1[cntZero2] != '0') break;
	}
	int cntZero3 = 0;
	for (cntZero3 = 0; cntZero3 < strlen(s3); cntZero3++) {
		if (s3[cntZero3] != '0') break;
	}
	int cnt = cntZero3 - cntZero2;
	int k = 1;
	while (s3[0] == '0' && (k <= cnt || len3 + 1 > strlen(s1))) {
		k++;
		for (int i = 0; i <= len3 - 1; i++) {
			s3[i] = s3[i + 1];
		}
		len3--;
	}
	s3[len3 + 1] = '\0';
}

main() {
	int t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		char s1[300];
		gets(s1);
		int n = strlen(s1);
		generator(s1);
		bool check;
		for (int i = 1; i <= n; i++) {
			char s2[300];
			char s3[300];
			sprintf(s2, "%d", i);
			prod(s1, s2, s3);
			check = false;
			for (int j = 0; j < len; j++) {
				if (strcmp(s3, gen[j]) == 0) {
					check = true;
					break;
				}
			}
			if (!check) break;
		}
		if (check) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
