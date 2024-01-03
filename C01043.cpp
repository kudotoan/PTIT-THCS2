#include <stdio.h>
int main()
{
    int a,b; 
    scanf("%d%d",&a,&b);
    for (int i = 1; i<=a; i++) {
		for (int j = 1; j<=b; j++) {
			if (a<=b) {
				if (i+j-1 <=b) printf("%d",i+j-1);
        		else {
					printf("%d",b-j+1);
				}
			}
			if (a>b) {
				if (j==1) printf("%d",i);
				else {
					if (i+j-1 <=b) printf("%d",i+j-1);
        			else {
						printf("%d",b-j+1);
					}
				}
			}
		}
        printf("\n"); 
    }
}
