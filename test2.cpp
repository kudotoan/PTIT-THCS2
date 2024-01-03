#include <stdio.h>
#include <string.h>
main () {
	char a[100],b[100];
	gets(a);
	gets(b);
	int kt=strcmp(a,b);
	printf("%d",kt);
}
