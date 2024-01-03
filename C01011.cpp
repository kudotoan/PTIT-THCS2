#include<stdio.h>
#include <math.h>
main () {
	float a,b,c,x1,x2,cb2,delta;
		scanf("%f%f%f",&a,&b,&c);
		if(a==0) {
        if(b==0) printf("No");
        else printf("%.2f",(-1)*c/b);
    }
		else {
				delta = b*b-4*a*c;
				if (delta != 0) {
				if (delta > 0) {
					cb2 = sqrt(delta);
					x1 = (b*(-1) + cb2)/(2*a);
					x2 = (b*(-1) - cb2)/(2*a);
					printf("%.2f %.2f",x1,x2);
				}
				else if (delta < 0) printf("No");
				}
			else {
				printf("%.2f",(float)(-b/(2*a)));
		}
			}
		
	
		}
