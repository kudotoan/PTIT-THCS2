#include <stdio.h>
main () {
	int n;
	scanf("%d",&n);
	int tam=1;
	for (int i=0; i<n; i++) {
		for (int j=0; j<tam; j++) {
			printf("0 ");
		}
		tam++;
		int k=1;
		for (int j=tam; j<=n; j++) {
			printf("%d ",k++);
		}
		printf("\n");
	}
}
