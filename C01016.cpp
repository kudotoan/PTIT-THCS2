#include<stdio.h>
main(){
	int t;
	scanf("%d",&t);
	while (t--) {
	int n;
	scanf("%d",&n);
	int a=n;
	int m;
	m=n%10;
	while(n>=10){
	n/=10;
}
	if (m==n) printf("YES\n"); 
	else printf("NO\n");
	}
	return 0;
}
