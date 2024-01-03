#include <stdio.h>
main () {
	int n,a[100],chan[100], le[100],demchan=0,demle=0;
	scanf("%d",&n);
	for (int i=0; i<n; i++) {
		scanf("%d",&a[i]);
		if (a[i]%2==0) chan[demchan++] = a[i]; else le[demle++]=a[i];
	}
	for (int i=0; i<demchan;i++) { 
		printf("%d ",chan[i]);
	}
	printf("\n");
	for (int i=0; i<demle;i++) { 
		printf("%d ",le[i]);
	}
}
