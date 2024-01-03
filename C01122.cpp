#include <stdio.h>
#include <string.h>

int kiemtrasodep(char a[]) {
	int size=strlen(a);
	for (int i=0;i<size; i++) {
		if (a[i]%2!=0) return 0;
	}
	return 1;
}
int kiemtrathuannghich(char a[]) {
	int size=strlen(a);
	for (int i=0; i<(size/2); i++) {
		if (a[i]!=a[size-i-1]) return 0;
	}
	return 1;
}
main () {
	int t;
	scanf("%d",&t);
	getchar();
	while (t--) {
		char x[500];
		scanf("%s",x);
		if (kiemtrathuannghich(x)==1 && kiemtrasodep(x)==1) printf("YES\n"); else printf("NO\n");
	}
	

}
