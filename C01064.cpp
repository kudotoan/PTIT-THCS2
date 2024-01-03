//#include<stdio.h>
//int fbnci(int n)
//{
//    if(n<4) return n;
//   return fbnci(n-2)+fbnci(n-1);
//}
//int main() {
//   int n;
//   scanf("%d",&n);
//   int i=1;
//   while (fbnci(i)<n) {
//	i++;
//}
//   	if (fbnci(i)==n) printf("1"); else printf("0");
//} 

#include <stdio.h>
main() {
	int n;
	scanf("%d", &n);
	int ans = 0;
 
	int a = 1, b = 1;
 
	if (n == 1) ans = 1;
	while (b<n){
		int c = a + b;
		if (c == n)	ans = 1;
		a = b;
		b = c;
	}
	printf("%d\n",ans);
}
