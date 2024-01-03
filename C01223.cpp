#include <stdio.h>
#include <math.h>
#include<stdlib.h>
//void swap(int *a, int *b) {
//	int tam=*a;
//	*a=*b;
//	*b=tam;
//}
int cmp(void const* a, void const* b) {
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}
//void sort(int a[], int n) {
//	for (int i=0; i<n-1; i++) {
//		for (int j=i+1; j<n; j++) {
//			if (a[i]>a[j]) {
//				int tam=a[i];
//				a[i]=a[j];
//				a[j]=tam;
//			}
//		}
//	}
//}
//int partition(int a[],int l,int r) {
//	int piviot=a[r];
//	int i=l-1;
//	for (int j=l; j<r; j++) {
//		if (a[j]<=piviot) {
//			i++;
//			swap(&a[i],&a[j]);
//		}
//	}
//	i++;
//	swap(&a[i],&a[r]);
//	return i;
//}
//void qsort(int a[], int l, int r) {
//	if (l>=r) return;
//	int p=partition(a,l,r);
//	qsort(a,l,p-1);
//	qsort(a,p+1,r);
//}
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i=0; i<n; i++) {
			scanf("%d",&a[i]);
		}
//		sort(a,n);
		qsort(a,n,sizeof(int),cmp);
//		qsort(a,0,n-1);
		int min=1e9,cnt=0;
		for (int i=0; i<n-1; i++) {
			int dis=a[i+1]-a[i];
			if (dis==min) cnt++;
			if (dis<min) {
				cnt=0;
				cnt++;
				min=dis;
			}
		}
		printf("%d %d\n",min,cnt);
	}
}
