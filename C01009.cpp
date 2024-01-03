#include<stdio.h>
main () {
	int nam, tuan, ngay, n;
		scanf("%d",&n);
		nam = (int)n/365;
		tuan= ((int)n%365)/7;
		ngay= (int)n-365*nam-7*tuan;
		printf("%d ""%d ""%d",nam,tuan,ngay);
}


