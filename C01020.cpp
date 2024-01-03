#include<stdio.h>
#include<math.h>
main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a=sqrt(m);
	int b=sqrt(n);
	if (a*a<m) {
		printf("%d\n",b-a);
		int i;
		for (i=a+1; i<=b; i++) printf ("%d\n",i*i);
	} 
	else {
		printf("%d\n",b-a+1);
		int i;
		for (i=a; i<=b; i++) printf ("%d\n",i*i);
	}
}
