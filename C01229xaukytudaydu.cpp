#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
int findmax(int *a, int *b) {
	if (*a>*b) return *a; else return *b;
}
main () {
	char x[50];
	scanf("%s",x);
	int a[50];
	for (int i=0; i<strlen(x); i++) {
		a[i]=1;
	}
	for (int i=0; i<strlen(x); i++) {
		for (int j=0; j<i; j++) {
			if (x[i]>x[j]) {
				if (a[i]<a[j]+1) a[i]=a[j]+1;
			}
		}
	}
	int max=0;
//	for (int i=0; i<strlen(x); i++) {
//		printf("%d ",a[i]);
//	}
//	printf("\n");
	for (int i=0; i<strlen(x); i++) {
	max=findmax(&max,&a[i]);
	}
	printf("%d",26-max);
}

