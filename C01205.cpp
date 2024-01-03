//#include <stdio.h>
//struct phanso {
//	long long tuso;
//	long long mauso;
//};
//
//long long ucln(long long a, long long b) {
//	while (b!=0) {
//		long long tam=b;
//		b=a%b;
//		a=tam;
//	}
//	return a;
//}
//main () {
//	int t;
//	scanf("%d",&t);
//	for (int i=1; i<=t; i++) {
//		struct phanso a,b;
//		scanf("%lld%lld%lld%lld",&a.tuso,&a.mauso,&b.tuso,&b.mauso);
//		a.tuso=a.tuso/ucln(a.tuso,a.mauso);
//		a.mauso=a.mauso/ucln(a.tuso,a.mauso);
//		long long bcnn=(a.mauso*b.mauso)/ucln(a.mauso,b.mauso);
//		a.tuso=a.tuso*(bcnn/a.mauso);
//		a.mauso=bcnn;
//		b.tuso=b.tuso*(bcnn/b.mauso);
//		b.mauso=bcnn;
//		printf("Case #%d:\n",i);
//		printf("%lld/%lld %lld/%lld\n",a.tuso,a.mauso,b.tuso,b.mauso);
//		//tinh tong
//		long long tongtuso=(a.tuso+b.tuso)/(ucln(a.tuso+b.tuso,bcnn));
//		long long tongmauso=bcnn/(ucln(a.tuso+b.tuso,bcnn));
//		printf("%lld/%lld\n",tongtuso,tongmauso);
//		//tinh thuong
//		long long thuongtuso=a.tuso/(ucln(a.tuso,b.tuso));
//		long long thuongmauso=b.tuso/(ucln(a.tuso,b.tuso));
//		printf("%lld/%lld\n",thuongtuso,thuongmauso);
//	}
//}


#include <stdio.h>

int ucln(long a,long b) { long r=b % a; while (r) { b=a; a=r; r=b % a; } return a; }
int bcnn(long long a,long long b) { return a*b/ucln(a,b); }

main() {
long long t,a,b,c,d,x; scanf("%lld",&t);
for (long long i=1;i<=t;i++) {
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	x=ucln(a,b);
	a/=x; b/=x; x=ucln(c,d); c/=x; d/=x;
	long long ms=bcnn(b,d);
	long long t1=a*ms/b,t2=c*ms/d;
	printf("Case #%lld:\n",i); printf("%lld/%lld %lld/%lld\n",t1,ms,t2,ms);
	printf("%lld/%lld\n",(t1+t2)/ucln(t1+t2,ms),(ms/ucln(t1+t2,ms)));
	printf("%lld/%lld\n",a*d/ucln(a*d,b*c),b*c/ucln(a*d,b*c));
}
}
