#include <stdio.h>
#include <math.h>
struct tamgiac {
	int a,b,c;
	float s;
};

main () {
	int n;
	scanf("%d",&n);
	struct tamgiac list[n];
	for (int i=0; i<n; i++) {
		scanf("%d%d%d",&list[i].a,&list[i].b,&list[i].c);
		float p=(list[i].a+list[i].b+list[i].c)/2;
		list[i].s=sqrt(p*(p-list[i].a)*(p-list[i].b)*(p-list[i].c));
	}
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (list[j].s<list[i].s) {
				struct tamgiac temp;
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}			
		}
	}
	for (int i=0; i<n; i++) {
		printf("%d %d %d\n",list[i].a,list[i].b,list[i].c);
	}
}
