
#include <stdio.h>
#include <math.h>
main() {
	int n,i=1,j=3;
	scanf("%d",&n);
	if (n>=2) {
		printf("2\n");
		while (i<n) {
			int s=0;
			for (int k=3; k<=sqrt(j); k+=1) {
				if (j%k==0) s+=1;
			}
			if (s==0) {
				printf("%d\n",j);
				i++;
				}
		j+=2;
		}
	}	
}
