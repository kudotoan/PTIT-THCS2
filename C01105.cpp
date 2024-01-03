#include <stdio.h>
#include <math.h>
void nhapmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&s[i]);
	}
}

int snt(int n) {
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n);i++) {
		if (n%i==0) return 0;
	}
	return 1;
}

void sapxepmang(int n, int s[]) {
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (s[i]>s[j]) {
				int d = s[i];
				s[i] = s[j];
				s[j]=d;
			}
		}
	}
}

main () {
	int t,dem=1;
	scanf("%d",&t);
	while (t--) {
		int n,s[100],kt[100000]={};
		scanf("%d",&n);
		nhapmang(n,s);
		sapxepmang(n,s);
		for (int i=0; i<n; i++) {
			kt[s[i]]++;
		}
		printf("Test %d:\n",dem++);
		for (int i=0;i<n;i++) {
			if (kt[s[i]]!=0 && snt(s[i])==1) {
			printf("%d xuat hien %d lan\n",s[i],kt[s[i]]);
			kt[s[i]]=0;
			}
		}
	}
		
}

