#include <stdio.h>
void sapxepchon(int n, int a[100]) {
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	
	for (int j=0; j<n-1; j++) {
	int nho=j,min=a[j];	
	for (int i=j+1; i<n; i++) {
	 	if (a[i]<min) {
	 		min=a[i];
	 		nho=i;
		 }
	}
	a[nho]=a[j];
	a[j]=min;
	printf("Buoc %d: ",j+1);
	for (int k=0; k<n; k++) printf("%d ",a[k]);
	printf("\n");
	}
	
	
}
main () {
	int n, a[100];
	scanf("%d",&n);
	sapxepchon(n,a);
}
