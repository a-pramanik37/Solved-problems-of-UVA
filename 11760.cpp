#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int r, c, n, i, j, x, y, rows[100000], cols[100000], flg, cas=1, r1, r2, c1, c2, mainflg1, mainflg2;

     while(scanf("%d%d%d", &r, &c, &n)==3){

        if(r==0 && c==0 && n==0) break;

        for(i = 1; i<=n; i++){
            scanf("%d%d", &rows[i], &cols[i]);
        }
        scanf("%d%d", &x, &y);
        flg = 0;
        for(i = 1; i<=n; i++){
            if(x==rows[i]){
                flg = 1;
                break;
            }
        }

        if(flg==1) printf("Case %d: Party time! Let’s find a restaurant!\n", cas++);

        else{
            flg = 0;

            for(i = 1; i<=n; i++){
                if(y==cols[i]){
                    flg = 1;
                    break;
                }
            }

            if(flg==1) printf("Case %d: Party time! Let’s find a restaurant!\n", cas++);


            else{

                r1 = 0;
                r2 = 0;
                c1 = 0;
                c2 = 0;
                mainflg1 = 0;
                mainflg2 = 0;

                for(i = 1; i<=n; i++){
                    if(x<rows[i]) r1=1;
                        if(x>rows[i]) r2 = 1;
                }
                if(r1==1 && r2==1) mainflg1 =1;


                for(i = 1; i<=n; i++){
                    if(x<cols[i]) c1=1;
                        if(x>cols[i]) c2 = 1;
                }
                if(c1==1 && c2==1) mainflg2 =1;


                if(mainflg1==1 && mainflg2==1) printf("Case %d: Party time! Let’s find a restaurant!\n", cas++);

                else printf("Case %d: Escaped again! More 2D grid problems!\n", cas++);

            }
        }

     }
     return 0;

}
