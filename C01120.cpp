#include <stdio.h>
#include <string.h>
void xoaxuongdong(char a[]) {
	int t=strlen(a);
	if (a[t-1]=='\n') {
		a[t-1]='\0';
	}
}


main () {
		char x1[100], x2[100];
		fgets(x1,sizeof(x1),stdin);
		xoaxuongdong(x1);
		fgets(x2,sizeof(x2),stdin);
		xoaxuongdong(x2);
		for (int i=0; i<strlen(x1); i++) {
			if (x1[i] == x2[0]) {
				int test =1;
				for (int j=1; j<strlen(x2); j++) {
					if (x1[i+j] != x2[j]) test =0; 
				}
				if (test==1) {
					for (int j=i; j<=strlen(x1)-strlen(x2); j++) {
						x1[j] = x1[j+strlen(x2)];
					}
//				x1[strlen(x1)-strlen(x2)+1] = '\0';
				}
			} 
 		}
		printf("%s",x1);
}
