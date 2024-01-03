#include<stdio.h>
#include<math.h>
main() {
	int a[4][4],sum=0,cmax=0,scn=0,nhoi,nhoj;
	for (int i=1; i<=3; i++) {
		for (int j=1; j<=2; j++) {
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
			if (cmax<a[i][j]) {
				cmax=a[i][j];
				nhoi=i;
				nhoj=j;
			}
			
		}
		scn+=a[i][1]*a[i][2];
	}
	//so sanh dien tich
	if (cmax*cmax!=scn) {
		printf("NO");
		return 0;
	}
	//so sanh chu vi
	int cv=cmax*4;
	if (cv==sum) {
		printf("YES");
		return 0;
	} else {
		int tam=cv-sum;
		if (a[nhoi][nhoj+1]==tam || a[nhoi][nhoj-1]==tam) {
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
