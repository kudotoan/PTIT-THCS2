#include <stdio.h>
#include <math.h>

double khoangcach(double xa, double ya, double xb, double yb) {
	return sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
}
int kiemtra(double a, double b, double c) {
	if (a+b<=c || a+c<=b || b+c<=a) return 0;
	else return 1;
}

double chuvi(double a, double b, double c) {
	return a+b+c;
}

main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		double xa,ya,xb,yb,xc,yc;
		scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
		double a,b,c;
		a=khoangcach(xa,ya,xb,yb);
		b=khoangcach(xb,yb,xc,yc);
		c=khoangcach(xc,yc,xa,ya);
		if (kiemtra(a,b,c)==0) {
			printf("INVALID\n");
			continue;
		}
		printf("%.3lf\n",chuvi(a,b,c));
	}
}
