#include <stdio.h>
int notdown(int a){
	while (a>10) {
		if (a%10<(a/10)%10) return 0;
		a/=10;
	}
	return 1;
}

void swap(int *a, int *b) {
	int c=*a;
	*a=*b;
	*b=c;
}
	int a[100000],cnt[100000]={},n=0;	
main () {
	while (scanf("%d",&a[n])!=EOF) {
		if (notdown(a[n])) {
			int ok=1;
			for (int i=0; i<n; i++) {
				if (a[i]==a[n]) {
					cnt[i]++;
					ok=0;
				} 	
			}
			if (ok==1) {
				cnt[n++]=1;
			}
		}
	}
//	printf("%d",n);
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (cnt[i]<cnt[j]) {
				swap(&cnt[i],&cnt[j]);
				swap(&a[i],&a[j]);
			}
		}
	}
	for (int i=0; i<n; i++) {
		printf("%d %d\n",a[i],cnt[i]);
	}
}
