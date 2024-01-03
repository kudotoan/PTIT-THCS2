//#include <stdio.h>
//#include <string.h>
//main () {
//	int t;
//	scanf("%d",&t);
//	while (t--) {
//		int n;
//		scanf("%d",&n);
//		char listxau[200][200];
//		for (int i=0; i<n; i++){
//			scanf("%s",listxau[i]);
//		}
//		char ans[2000];
//		ans[0]='\0';
//		int nho;
//		for (int i=0; i<n; i++) {
//			char min[200];
//			int nho=i;
//			strcpy(min,listxau[i]);
//			for (int j=i+1; j<n; j++) {
//				if (strcmp(listxau[j],min)<0) {
//					strcpy(min,listxau[j]);
//					nho=j;
//				}
//			}
//			strcat(ans,min);
//			char tam[200];
//			strcpy(tam,listxau[i]);
//			strcpy(listxau[i],listxau[nho]);
//			strcpy(listxau[nho],tam);
//		}
//		printf("%s\n",ans);
//	}
//}

#include <stdio.h>
#include <string.h>
int kiemtra(char a[200], char b[200]) {
	char x1[200],x2[200];
	strcpy(x1,a);
	strcpy(x2,b);
	//
	char tam[200];
	strcpy(tam,x1);
	strcat(x1,x2);
	strcat(x2,tam);
	if (strcmp(x1,x2)<0) return 0; else return 1;
}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		char listxau[200][200];
		for (int i=0; i<n; i++){
			scanf("%s",listxau[i]);
		}
		for (int i=0; i<n-1; i++) {
			for (int j=n-1; j>i; j--) {
				if (kiemtra(listxau[j],listxau[j-1])==0) {
					char c[200];
					strcpy(c,listxau[j]);
					strcpy(listxau[j],listxau[j-1]);
					strcpy(listxau[j-1],c);
				}
			}
		}
		for (int i=0; i<n; i++) {
			printf("%s",listxau[i]);
		}
		printf("\n");
 	}
}
