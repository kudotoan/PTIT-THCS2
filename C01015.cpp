#include<stdio.h>
main(){
	int t;
	scanf("%d",&t);
	while (t--) {
	int n;
	scanf("%d",&n);
	int s = 0;
	while(n>0){
	s+=n%10;
	n/=10;
}
	printf("%d\n",s);
	
	}
	return 0;
}
