#include <stdio.h>
#include <math.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

void sapxepmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (s[i]<s[j]) {
				int d = s[i];
				s[i] = s[j];
				s[j]=d;
			}
		}
	}
}

main () {
		int n,s[100];
		scanf("%d",&n);
		nhapmang(n,s);
		sapxepmang(n,s);
		for (int i=0; i<n; i++) {
			printf("%d ",s[i]);
		}
}

