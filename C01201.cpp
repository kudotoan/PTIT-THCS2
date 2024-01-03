#include <stdio.h>
#include <string.h>
void daoxau(char a[]) {
	for (int i=0; i<strlen(a)/2; i++) {
		char tam=a[i];
		a[i]=a[strlen(a)-i-1];
		a[strlen(a)-i-1]=tam;
	}
}
main () {
	int t;
	scanf("%d\n",&t);
	while (t--) {
		char x1[500], x2[500], kq[501];
		gets(x1);
		gets(x2);
		//dao xau, bu phan tu 0
		daoxau(x1);
		daoxau(x2);
		int dodai=strlen(x1);
		if (strlen(x1)<strlen(x2)) dodai=strlen(x2);
		for (int i=strlen(x1); i<dodai; i++) {
			x1[i]='0';
		}
		for (int i=strlen(x2); i<dodai; i++) {
			x2[i]='0';
		}
		x1[dodai]='\0';
		x2[dodai]='\0';
		//cong 2 xau
		int du=0;
		for (int i=0; i<dodai; i++) {
			int tam=x1[i]-48+x2[i]-48;
			if (tam+du>=10) {
				kq[i]=(tam+du)%10+48; 
				du=1;
			} else {
				kq[i]=tam+du+48;
				du=0;
			}
			if (i==dodai-1 && du==1) kq[dodai]='1'; else kq[dodai]='\0';
		}
		daoxau(kq);
		printf("%s\n",kq);
	}
}
