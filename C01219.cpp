#include <stdio.h>
void swap(int *a, int *b) {
	int tam = *a;
	*a=*b;
	*b=tam;
}
main () {
	int x,y;
	while (scanf("%d%d",&x,&y)!=EOF) {
	
		if (x>y) swap(&x,&y);
		int buoc=1,dem=0;
		while (x<y) {
			x=x+buoc;
			dem++;
			y=y-buoc;
			dem++;
			if (x>y) {
				if (x>=y+buoc) dem=dem-1;
			}
			buoc++;
		}
		printf("%d\n",dem);
	}
}
