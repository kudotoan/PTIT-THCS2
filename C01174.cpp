#include <stdio.h>
#include <string.h>
main () {
	int t;
	scanf("%d",&t);
	while (t--) {
		int dem=0,chan=0, le=0;
		char kitu=' ';
		while (kitu!='\n') {
			int n;
			scanf("%d",&n);
			dem++;
			if (n%2==0) chan++; else le++;
			kitu=getchar();
		}
		if (dem%2==0 && chan>le || dem%2!=0 && le>chan) printf("YES\n"); else printf("NO\n");
	}
}

