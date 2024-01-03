#include <stdio.h>
struct pkm{
	char ten[50];
	int need,have,lever;
};

main () {
	struct pkm list[1000];
	int n,sum=0,nho=0,max=0;
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		gets(list[i].ten);
		scanf("%d%d",&list[i].need,&list[i].have);
		getchar();
		list[i].lever=0;
		while (list[i].have>=list[i].need) {
			int tang=list[i].have/list[i].need;
			list[i].lever+=tang;
			list[i].have=(list[i].have%list[i].need)+tang*2;
		}
		sum=sum+list[i].lever;
		if (max<list[i].lever) {
			nho=i;
			max=list[i].lever;
		}
	}
	printf("%d\n%s",sum,list[nho].ten);
}
