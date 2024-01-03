#include <stdio.h>
#include <stdlib.h>
main () {
	int x[5],y[5];
	for (int i=1; i<=4; i++) {
		scanf("%d%d",&x[i],&y[i]);
	}
	int xmax=0,ymax=0,xmin=101, ymin=101;
	for (int i=1; i<=4; i++) {
		if (xmax<x[i]) {
			xmax=x[i];
		}
		if (ymax<y[i]) {
			ymax=y[i];
		}
		if (xmin>x[i]) {
			xmin=x[i];
		}
		if (ymin>y[i]) {
			ymin=y[i];
		}
	}
	int s;
	if (xmax-xmin<ymax-ymin) {
		s=abs(ymax-ymin)*abs(ymax-ymin);
	} else {
		s=abs(xmax-xmin)*abs(xmax-xmin);
	}
	printf("%d",s);
}
