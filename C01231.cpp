//#include <stdio.h>
//#include <string.h>
//void tronxau(char x1[], char x2[], char xkq[], int n) {
//	int cnt=0;
//	for (int i=0; i<n; i++) {
//		xkq[cnt++]=x2[i];
//		xkq[cnt++]=x1[i];
//	}
//	xkq[n*2]='\0';
//	char p[n];
//    char q[n];
//        for(int i = 0; i < n; i++) p[i] = xkq[i];
//        for(int i = n; i < 2*n; i++) q[i - n] = xkq[i]; 
//        strcpy(x1, p);
//        strcpy(x2, q);
//}
//main () {
//	int n;
//	scanf("%d", &n);
//	getchar();
//	while (n) {
//		char x1[n+10],x2[n+10],x3[2*n+10],xkq[2*n+10],xss[2*n+10];
//		gets(x1); gets(x2); gets(x3);
//		tronxau(x1,x2,xss,n);
//		int cnt=1;
//		if (strcmp(xss,x3)==0) {
//			printf("%d\n",cnt);
//			} else 
//			{
//				while (strcmp(xkq,x3)!=0 && strcmp(xkq,xss)!=0) {
//					tronxau(x1,x2,xkq,n);
//					cnt++;
//				}
//				if (strcmp(xkq,x3)==0) printf("%d\n",cnt); else printf("-1\n");
//			}
//		scanf("%d",&n);
//		getchar();
//	}
//}
#include <stdio.h>
#include <string.h>
void tronxau(char x1[], char x2[], char xkq[]) {
	int cnt=0;
	for (int i=0; i<strlen(x1)*2; i++) {
		if (i%2==0) xkq[i]=x2[cnt]; else xkq[i]=x1[cnt++];
	}
	xkq[strlen(x1)*2]='\0';
	char* temp=&xkq[strlen(x1)];
	strncpy(x1,xkq,(int)strlen(xkq)/2);
	strcpy(x2,temp);
}
main () {
	int n;
	scanf("%d", &n);
	getchar();
	while (n) {
		char x1[n+10],x2[n+10],x3[2*n+10],xkq[2*n+10],xss[2*n+10];
		gets(x1); gets(x2); gets(x3);
		tronxau(x1,x2,xss);
		int cnt=1;
		if (strcmp(xss,x3)==0) {
			printf("%d\n",cnt);
		} else {
			while (strcmp(xkq,x3)!=0 && strcmp(xkq,xss)!=0) {
				tronxau(x1,x2,xkq);
				cnt++;
			}
			if (strcmp(xkq,x3)==0) printf("%d\n",cnt); else printf("-1\n");
		}
		scanf("%d",&n);
		getchar();
	}
}

