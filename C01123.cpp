#include <stdio.h>
#include <string.h>

int kiemtratong(char a[]) {
	int size=strlen(a),sum=0;
	for (int i=0;i<size; i++) {
		sum+=a[i]-48;
	}
	if (sum%10!=0) return 0; else return 1;
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
//		int len=strlen(x);
		if (kiemtrathuannghich(x)==1 && kiemtratong(x)==1 && x[0]=='8' && x[strlen(x)-1]== '8') printf("YES\n"); else printf("NO\n");
	}
	

}
