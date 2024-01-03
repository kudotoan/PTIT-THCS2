#include<stdio.h>
main(){
	int n,k,dem=0;
	scanf("%d%d",&n,&k);
	while (n>0) {
		int i=n;
		if (n%2!=0) n=n-1;
		else {
			while (i>0) {
				if (i%2==0) {
					dem++;
					i/=2;	
				} if (i%2!=0) break;
			}
			n=n-2;
		}
	if (dem>=k) {
		printf("Yes");
		break;
	}
	}
	if (dem<k) printf("No");
}

