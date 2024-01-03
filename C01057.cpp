//#include <stdio.h>
//int UCLN(int a, int b) {
//	if (a>=b) {
//		if (a%b!=0) return UCLN(a%b,b); else return b;
//	}
//	if (a<b) {
//		if (b%a!=0) return UCLN(a,b%a); else return a;
//	}
//}
//main() {
//	int a,b;
//	scanf ("%d%d",&a,&b);
//	if (a>b) {
//		int s=a;
//		a=b;
//		b=s;
//	}
//	for (int i=a; i<b; i++) {
//			for (int j=i+1; j<=b; j++) {
//				if (UCLN(i,j)==1) printf("(%d,%d)\n",i,j);
//			}
//		}
//}

//#include <stdio.h>
//main() {
//	int a,b;
//	scanf ("%d%d",&a,&b);
//	if (a<b) {
//		for (int i=a; i<b; i++) {
//			int s=0;
//			for (int j=i+1; j<=b; j++) {
//				for (int k=2; k<=i; k++) {
//					if (j%k==0 && i%k==0) break; else {
//						printf("(%d, %d)\n",i,j);
//						break;
//					}
//				}
//			}
//		}
//	} else {
//		for (int i=b; i<a; i++) {
//			int s=0;
//			for (int j=i+1; j<=a; j++) {
//				for (int k=2; k<=i; k++) {
//					if (j%k==0 && i%k==0) break; else {
//						printf("(%d, %d)\n",i,j);
//						break;
//					}
//				}
//			}
//		}
//	}
//}

#include <stdio.h>
 
int gcd(int a, int b){
	while (b!=0){
		int r = a % b;
		a = b;
		b = r;
	}
 
	return a;
}
 
main () {
	int a,b,i,j;
	scanf("%d %d", &a, &b);
 
	if (a>b){
		int tg = a;
		a = b;
		b = tg;
	}
 
	for(i = a; i<b; i++)
		for(j=i+1; j<=b; j++)
			if (gcd(i,j) == 1) 
				printf("(%d,%d)\n", i, j);
 
}
