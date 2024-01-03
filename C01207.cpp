#include <stdio.h>
#include <string.h>
struct thisinh{
	int stt;
	char ten[50];
	char sinh[50];
	float d1,d2,d3,tong;
};

main () {
	int n;
	scanf("%d",&n);
	struct thisinh list[n];
	getchar();
	float max=0;
	for (int i=0; i<n; i++) {
		list[i].stt=i+1;
		gets(list[i].ten);
		gets(list[i].sinh);
		scanf("%f%f%f",&list[i].d1,&list[i].d2,&list[i].d3);
		getchar();
		list[i].tong=list[i].d1+list[i].d2+list[i].d3;
		if (max<list[i].tong) max=list[i].tong;
	}
	for (int i=0; i<n; i++) {
		if (list[i].tong==max) {
			printf("%d %s %s %.1f\n",list[i].stt,list[i].ten,list[i].sinh,list[i].tong);
		}
	}
}
