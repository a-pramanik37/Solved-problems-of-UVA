#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    int n, m, i, j, k=0, coun, flg;

    char a[105][105], ch;

    while(scanf("%d%d", &n, &m)==2){




            if(n==0 && m==0) break;

         scanf("%c", &ch);
        for(i = 1; i<=n; i++){

            for(j = 1; j<=m; j++){
                scanf("%c", &a[i][j]);
            }
           scanf("%c", &ch);
        }



        for(i = 1; i<=n; i++){

            for(j = 1; j<=m; j++){
                 coun = 0;
               if(a[i][j]=='.'){

                    if(/*j!=n &&*/a[i][j+1]=='*')coun++;
                    if(/*i!=n && j!=n &&*/ a[i+1][j+1]=='*') coun++;
                    if(/*i!=n &&*/ a[i+1][j]=='*') coun++;
                    if(/*i!=n && j!=1 &&*/ a[i+1][j-1]=='*') coun++;
                    if(/*j!=1 &&*/ a[i][j-1]=='*') coun++;
                    if(/*i!=1 && j!=1 &&*/ a[i-1][j-1]=='*') coun++;
                    if(/*i!=1 &&*/ a[i-1][j]=='*') coun++;
                    if(/*i!=1 && j!=n &&*/ a[i-1][j+1]=='*') coun++;

                     a[i][j] = coun+'0';

                }



               }

            }



        if(k>0) printf("\n");
        k++;
        printf("Field #%d:\n", k);

        for(i = 1; i<=n; i++){
            for(j = 1; j<=m; j++){
                printf("%c", a[i][j]);
            }
            printf("\n");
        }
        for(i=1; i<=n; i++){
            for(j=1; j<=m; j++){
                a[i][j]='\0';
            }
        }

    }
    return 0;
}
