

//
//#include <stdio.h>
//main() {
//	int n;
//	scanf("%d",&n);
//	while (n--) {
//		int s=0;
//		for (int i=1; i<=n; i++) {
//			if (n%i==0) s++;
//		}
//		if (s==2) printf("%d\n",n);
//	}
//}



#include <stdio.h>
#include <math.h>
main() {
	int n;
	scanf("%d",&n);
	if (n>=2) {
		printf ("2\n");
		for (int i=3; i<=n; i+=2) {
			int s=0;
			for (int j=2; j<=sqrt(i); j++) {
				if (i%j==0) {
					s++;
				}
			}
			if (s==0) printf("%d\n",i);
		}
	}	
}


//#include <stdio.h>
//main() {
//	int n;
//	scanf("%d",&n);
//	if (n==2) printf("2");
//	if (n>2) {
//		printf("2\n");
//		for (int i=1; i<=n; i++) {
//		
//			int s=0;
//			for (int j=2; j<=i-1; j++) {
//				if (i%j==0) break;
//				if (j==i-1) {
//				printf("%d\n",i);
//			}
//		}
//		}
//	}
//}
