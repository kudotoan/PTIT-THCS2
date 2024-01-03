//#include <stdio.h>
//main () {
//	int n, s[100];
//	scanf("%d",&n);
//	scanf("%d",&s[0]);
//	int max=s[0],demmax=0;
//	for (int i=1; i<n; i++) {
//		scanf("%d",&s[i]);
//		if (s[i]>max) {
//			max=s[i];
//			demmax=i;
//		}
//	}
//	int max1=s[n-1-demmax];
//	for (int i=0;i<n;i++) {
//		if (max1<s[i] && s[i]!=max) max1=s[i];
//	}
//	printf("%d %d",max,max1);
//}

#include<stdio.h>
main(){
	int n,s[99],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	int max = s[0];
	for(i=0;i<n;i++){
		if(s[i]>max){
			max = s[i];
		}
	}
	int max2 = 0;
	for(i=0;i<n;i++){
		if(s[i]>max2 && s[i]<max){
			max2 = s[i];
			}
	}
	printf("%d %d",max,max2);
}

