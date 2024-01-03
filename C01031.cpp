//#include <stdio.h>
//main() {
//	int t;
//	scanf("%d",&t);
//	while (t--) {
//		int b,a,i,dem=0;
//		scanf("%d",&a);
//		b=a/2;
//		for (i=1;i<=b;i++) {
//			if (a%i==0) {
//				if (i%2==0) dem=dem+1;	
//			}
//		}	
//		if (a%2==0) printf("%d\n",dem+1); else printf("%d\n",dem);
//	}
//	
//}

#include<stdio.h>
#include<math.h>
main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, i=1, dem=0;
		scanf("%d",&a);
		int cb2=sqrt(a);
		while (i<=cb2) {
			if(a%i==0){
				if (i%2==0) dem++;
				if ((a/i)%2==0) dem++;
				if (a/i==i && i%2==0) dem--;
				}
			i++;
		}
	printf ("%d\n", dem);
	}
}
