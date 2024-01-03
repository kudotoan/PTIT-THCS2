#include <stdio.h>
#include <string.h>
struct mathang {
	int STT;
	char ten[50];
	char nhom[50];
	float giamua,giaban,lai;
};
main () {
	int n;
	scanf("%d",&n);
	getchar();
	struct mathang list[n];
	for (int i=0; i<n; i++) {
		list[i].STT=i+1;
		gets(list[i].ten);
		gets(list[i].nhom);
		scanf("%f%f",&list[i].giamua,&list[i].giaban);
		getchar();
		list[i].lai=list[i].giaban-list[i].giamua;
	}
	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			if (list[i].lai<list[j].lai) {
				struct mathang tam=list[i];
				list[i]=list[j];
				list[j]=tam;
			}
		}
	}
	for (int i=0; i<n; i++) {
		printf("%d %s %s %.2f\n",list[i].STT, list[i].ten,list[i].nhom,list[i].lai);
	}
}
