#include <stdio.h>
#include <string.h>
struct sinhvien {
	int msv;
	char ten[100];
	float dA, dB, dC;
};
struct sinhvien listsv[1000];
int d=0;

void addNew() {
	int n;
	scanf("%d",&n);
	getchar();
	for (int i=0; i<n; i++) {
		listsv[d].msv=d+1;
		gets(listsv[d].ten);
		scanf("%f %f %f",&listsv[d].dA,&listsv[d].dB,&listsv[d].dC);
		getchar();
		d++;
	}
	printf("%d\n",n);
}
void fixTT() {
	int n;
	scanf("%d\n",&n);
	gets(listsv[n-1].ten);
	scanf("%f %f %f",&listsv[n-1].dA, &listsv[n-1].dB, &listsv[n-1].dC);
	getchar();
	printf("%d\n",n);
}

void testList() {
	for (int i=d-1; i>=0; i--) {
		if (listsv[i].dA<listsv[i].dB && listsv[i].dB<listsv[i].dC) {
			printf("%d %s %.1f %.1f %.1f\n",listsv[i].msv,listsv[i].ten,listsv[i].dA,listsv[i].dB,listsv[i].dC);
		}
	}
}

main () {
	int t;
	scanf("%d",&t);
	getchar();
	while (t!=4) {
		switch(t) {
			case 1: addNew(); break;
			case 2: fixTT(); break;
			case 3: testList(); return 0;
		}
	scanf("%d",&t);
	}
}
