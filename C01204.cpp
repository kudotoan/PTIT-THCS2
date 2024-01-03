#include <stdio.h>
#include <string.h>
int kiemtra(char a[20]) {
	int dem=0;
	for (int i=0; i<strlen(a)/2; i++) {
		if (a[i]!=a[strlen(a)-i-1]) dem++;
		if (dem>1) return 0;
 	}
 	if (dem==0 && strlen(a)%2!=0 || dem==1 && strlen(a)%2!=0) return 1;
 	if (dem==1 && strlen(a)%2==0) return 1;
 	return 0;
}
main () {
	int t;
	scanf("%d\n",&t);
	while (t--) {
		char a[20];
		scanf("%s",a);
		if(kiemtra(a)==1) printf("YES\n"); else printf("NO\n");
	}
}
