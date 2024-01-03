//#include <stdio.h>
//void nhapmang(int n,int s[]) {
//	for (int i=0;i<n;i++) {
//		scanf("%d",&s[i]);
//		}
//}
//
//main () {
//	int n, s[100];
//	scanf("%d",&n);
//	nhapmang(n,s);
//	for (int i=0;i<n;i++) {
//		int kt=0;
//		for (int j=i+1; j<n; j++) {
//			if (s[i] == s[j]) {
//				kt=1;
//				for (int k=0; k<i;k++) {
//					if (s[i]==s[k]) kt=0;
//				}
//			}
//		}
//		if (kt==1) printf("%d ",s[i]);
//	}	
//}

#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int a[n], b[10000];
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]); b[a[i]]++;
	}
	for(int i=0; i<n; i++){
		if(b[a[i]]>1){
			printf("%d ",a[i]);
			b[a[i]] =0;
		}
	}
}
