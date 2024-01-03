//#include <stdio.h>
//void summax(int n, long long a[]) {
//	long long max=a[0];
//	for (int i=0; i<n-1; i++) {
//		long long kt=a[i];
//		for (int j=i+1; j<n; j++) {
//			long long tam=0;
//			for (int k=i; k<=j; k++) {
//				tam+=a[k];
//			}
//			if (kt<tam) kt=tam;
//		}
//		if (max<kt) max=kt;
//	}
//	printf("%lld\n",max);
//}
//main () {
//	int t;
//	scanf("%d",&t);
//	while (t--) {
//		int n;
//		scanf("%d",&n);
//		long long a[n];
//		for (int i=0; i<n; i++) {
//			scanf("%lld",&a[i]);
//		}
//		summax(n,a);
//	}
//}


#include <stdio.h>
 
main() {
	int T, i;
	scanf("%d", &T);
 
	while (T--){
		int n;
		scanf("%d", &n);
 
		long long maxsum = -10000000000;
		long long sum = 0;
 
		for(i=1; i<=n; i++){
			int x;
			scanf("%d", &x);
			sum = sum + x;
 
			if (sum>maxsum) maxsum = sum;
			if (sum<0) sum = 0;
		}
 
		printf("%lld\n", maxsum);
	}
}
 

