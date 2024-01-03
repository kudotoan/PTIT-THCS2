// #include <stdio.h>
// main () {
// 	int t;
// 	scanf("%d",&t);
// 	getchar();
// 	while (t--) {
// 		int n,m;
// 		scanf("%d%d",&n,&m);
// 		getchar();
// 		char a[n][m];
// 		for (int i=0; i<n; i++) {	
// 				scanf("%s",a[i]);
// 		}
// 		long long cnt=0;
// 		for (int i=0; i<n; i++) {
// 			for (int j=0; j<m; j++) {
// 				if (a[i][j]!='0') {
// //					int ok=0;
// 					for (int k=0; k<m; k++) {
// 						if (k==j) continue; else {
// 							if (a[i][k]!='0' && a[i][k]!=a[i][j]) {
// 								for (int l=0; l<n; l++) {
// 									if (l==i) continue; else {
// 										if (a[l][j]==a[i][k]&&a[l][j]!='0') {
// 											cnt++;
// //											ok=1; 
// //											break;
// 											}
// 										}
// 									}
// 								}
// 							}
// //							if (ok==1) break;
// 						}
// 					}
// 				}
// 			}
// 			printf("%lld\n",cnt);
// 		}
// }

#include <stdio.h>

const int maxn = 1111;

int main(void)
{
   int cnt_row[maxn][255], cnt_col[maxn][255], a[maxn][maxn];
   int n, m;

   int T, i, j, cl;
   scanf("%d\n", &T);

   while (T--)
   {
       scanf("%d%d\n", &n, &m);

       for (i = 1; i <= n; i++)
           for (int cl = 0; cl <= 2; cl++)
           {
               cnt_row[i][cl] = 0
               cnt_col[i][cl] = 0;
           }

       for (i = 1; i <= n; i++)
       {
           for (j = 1; j <= m; j++)
           {
               char c = getchar();

               a[i][j] = c - '0';
               cnt_row[i][a[i][j]]++;
               cnt_col[j][a[i][j]]++;
           }
           scanf("\n");
       }

       long long ans = 0;
       for (i = 1; i <= n; i++)
           for (j = 1; j <= m; j++)
               for (cl = 1; cl <= 2; cl++)
                   if (a[i][j] != cl && a[i][j] != 0)
                   {
                       ans = ans + 1LL * cnt_row[i][cl] * cnt_col[j][cl];
                   }

       printf("%lld\n", ans);
   }

   return 0;
}
