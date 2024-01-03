//#include <stdio.h>
//#include <string.h>
////kiem tra tu thuan nghich
//int ctn(char a[]) {
//	for (int i=0; i<strlen(a); i++) {
//		if (a[i]!=a[strlen(a)-i-1]) return 0;
// 	}
// 	return 1;
//}
//
//main () {
//	char a[1000];
//	gets(a);
//	//tach xau vao mang 2 chieu (luu)
//	char luu[1000][1000];
//	char *token=strtok(a," ");
//	int n=0, max=0;
//	while (token!=NULL) {
//		if (ctn(token)) {
//			if (max<strlen(token)) {
//				max=strlen(token);
//				n=0;
//				strcpy(luu[n++],token);
//			}
//			if (max==strlen(token)) {
//				strcpy(luu[n++],token);
//			}
//		}
//		token=strtok(NULL, " ");
//	}
//	//mang dai dien
//	int count[1000]={};
//	for (int i=1; i<n; i++) {
//		count[i]=1;
//	}
//	for (int i=0; i<n-1; i++) {
//		if(count[i]!=0) {
//			for (int j=i+1; j<n; j++) {
//				if (strcmp(luu[i],luu[j])==0) {
//					count[i]++;
//					count[j]=0;
//				}
//			}
//		}
//	}
//	//in ket qua
//	for (int i=0; i<n; i++) {
//		if (count[i]!=0) {
//			printf("%s %d\n",luu[i],count[i]);		
//		}
//		
//	}
//}

#include <stdio.h>
#include <string.h>
//kiem tra tu thuan nghich
int ctn(char a[]) {
	for (int i=0; i<strlen(a); i++) {
		if (a[i]!=a[strlen(a)-i-1]) return 0;
 	}
 	return 1;
}

main () {
	char a[1000];
	char luu[1000][1000];
	int n=0, max=0;
	int count[1000]={};
	while (scanf("%s",a)!=EOF) {
		if (ctn(a)) {
			if (max<strlen(a)) {
				max=strlen(a);
				n=0;
				strcpy(luu[n++],a);
			}
			if (max==strlen(a)) {
				strcpy(luu[n++],a);
			}
		}
	}
	//mang dai dien

	for (int i=1; i<n; i++) {
		count[i]=1;
	}
	for (int i=0; i<n-1; i++) {
		if(count[i]!=0) {
			for (int j=i+1; j<n; j++) {
				if (strcmp(luu[i],luu[j])==0) {
					count[i]++;
					count[j]=0;
				}
			}
		}
	}
	//in ket qua
	for (int i=0; i<n; i++) {
		if (count[i]!=0) {
			printf("%s %d\n",luu[i],count[i]);		
		}
		
	}
}
