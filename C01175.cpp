#include <stdio.h>
void sapxep(int n, int a[], int b[]) {
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (a[i]>a[j]) {
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
				tam=b[i];
				b[i]=b[j];
				b[j]=tam;
			}
		}
	}
}
main () {
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for (int i=0; i<n; i++) {
		scanf("%d%d",&a[i],&b[i]);
	}
	sapxep(n,a,b);
	int time =0;
	
	printf("%d",time);
}
