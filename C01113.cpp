//#include <stdio.h>
//void nhapmang(int n, int s[]) {
//	for (int i=0; i<n; i++) {
//		scanf("%d",&s[i]);
//	}
//}
//
//void xuatmang(int n, int s[]) {
//	for (int i=0; i<n; i++) {
//		printf("%d ",s[i]);
//	}
//}
//
//void loaitrungnhau(int n, int s[]) {
//	for (int i=0; i<n; i++) {
//		for (int j=i+1; j<n; j++) {
//			if (s[i]==s[j]) {
//				for (int k=j; k<n; k++) {
//					s[k]=s[k+1];
//				}
//				n-=1;
//			}
//		}
//	}
//	xuatmang(n,s);
//}
//
//main () {
//		int n,s[100];
//		scanf("%d",&n);
//		nhapmang(n,s);
//		loaitrungnhau(n,s);
//}


#include <stdio.h>
main () {
	int n,s[100];
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
		for (int j=0; j<i; j++) {
			if (s[j]==s[i]) {
				i=i-1;
				n=n-1;
				break;
			}
		}
	}
	for (int i=0; i<n; i++) {
		printf("%d ",s[i]);
	}
}
