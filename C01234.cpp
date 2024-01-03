#include <stdio.h>
#include <string.h>
//xoay 1 don vi theo yeu cau
void xoay(char s[]) {
	char tmp=s[0];
	for (int i=0; i<strlen(s)-1; i++) {
		s[i]=s[i+1];
	}
	s[strlen(s)-1]=tmp;
	s[strlen(s)]='\0';
}
main () {	
	char s[100][100];
	int n;
	scanf("%d",&n);
	getchar();
	// nhap n chuoi
	for (int i=0; i<n; i++) {
		gets(s[i]);
	}
	// dich chuyen n chuoi, luu ket qua vao bang
	int cnt[100][100];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			char tmp[100];
			strcpy(tmp,s[i]);
			int dem=0;
			if (j==i || strcmp(tmp,s[j])==0) {
				cnt[i][j]==dem;
				continue;
			}
			xoay(tmp);
			dem++;
			while (strcmp(s[i],tmp)!=0 && strcmp(tmp,s[j])!=0) {
				xoay(tmp);
				dem++;
			}
			if (strcmp(s[i],tmp)==0 && strcmp(tmp,s[j])!=0) cnt[i][j]=-1; else cnt[i][j]=dem;
		}
	}
	// kiem tra bang 2 chieu (cnt)
//	for (int i=0; i<n; i++) {
//		for (int j=0; j<n; j++) {
//			printf("%d", cnt[i][j]);
//		}
//		printf("\n");
//	}
	// tinh tong theo cot
	int tong[100]={};
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (cnt[i][j]==-1) {
				printf("-1");
				return 0;
			}
			tong[i]+=cnt[j][i];
		}
	}
	// kiem tra mang(tong);
//	for (int i=0; i<n; i++) {
//		printf("%d ",tong[i]);
//	}
	// tim so luot xoay it nhat
	int min=tong[0];
	for (int i=0; i<n; i++) {
		if (tong[i]<min) min=tong[i];
	}
	// in dap an
	printf("%d",min);
}
