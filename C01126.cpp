#include <stdio.h>
#include <string.h>
void dao(char a[]) {
	int len=strlen(a);
	int b[200];
	for (int i=0; i<strlen(a);i++) {
		b[i]=a[strlen(a)-i-1];
	}
	for (int i=0; i<strlen(a); i++) {
		a[i]=b[i];
	}
}
main () {
		char x[201];
		scanf("%s",x);
		int len=strlen(x);
		if (len==1) printf("%s",x); else {
			while (len>1) {
				char a[101],b[101];
				strncpy(a,x,len/2);
				a[len/2]='\0';
				dao(a);
				dao(x);
				if (len%2==0) {
					strncpy(b,x,len/2);
					b[len/2]='\0';
				} else {
					strncpy(b,x,len/2+1);
					b[len/2+1]='\0';
				}
				int nho=0;
				int end;
				if (len%2==0) {
					for (int i=0; i<len/2; i++) {
					int tam=a[i] - 48 + b[i] - 48;
					if (tam+nho>=10) {
						x[i]=tam-10 + nho + 48;
						nho=1;
					} else {
						x[i]=tam + nho + 48;
						nho = 0;
					}
					if (i+1>=len/2) end=len/2;
					if (nho==1 && i+1>=len/2) {
						x[i+1]='1';
						end=len/2+1;
					}
				}
				}
				if (len%2!=0) {
					for (int i=0; i<=len/2; i++) {
						int tam=a[i] - 48 + b[i] - 48;
						if (a[i]=='\0' || b[i]=='\0') tam+=48;
						if (tam+nho>=10) {
							x[i]=tam-10 + nho + 48;
							nho=1;
						} else {
							x[i]=tam + nho + 48;
							nho = 0;
						}
						if (i+1>len/2) end=len/2+1;
						if (nho==1 && i+1>len/2) {
							x[i+1]='1';
							end=len/2+2;
						}
					}
				}
				x[end]='\0';
				dao(x);
				len=strlen(x);
				printf("%s\n",x);
			}
		}
		
}

