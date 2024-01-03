#include<stdio.h>
int fbnci(int n)
{
    if(n<4) return n;
   return fbnci(n-2)+fbnci(n-1);
}
main() {
   int n;
   scanf("%d",&n);
   printf ("0 1 ");
   for (int i=1; i<n-1; i++) {
   	printf("%d ",fbnci(i));
   }
} 

