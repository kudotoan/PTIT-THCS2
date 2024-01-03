#include <stdio.h>
void swap(int *a, int *b) {
	int c=*a;
	*a=*b;
	*b=c;
}
main () {
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	int buoc=1,ok=1,j=n;
	while (ok) {
		ok=0;
		for (int i=0; i<j-1; i++) {
			if (a[i]>a[i+1]) {
				ok=1;
				swap(&a[i],&a[i+1]);
			}
		}
		if (ok==1) {
			printf("Buoc %d:",buoc++);
			for (int i=0; i<n; i++) {
				printf(" %d",a[i]);
			}
			printf("\n");
		}
		j--;
	}

}
