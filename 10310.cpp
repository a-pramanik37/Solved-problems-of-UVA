#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

double a[10000], b[10000];

int main()

{
     int i, j, k, n;
     double d1, d2, p, q, x1, y1, x2, y2, x, y;

     while(scanf("%d%lf%lf%lf%lf", &n, &x1, &y1, &x2, &y2)==5){

        for(i = 1; i<=n; i++){
            scanf("%lf%lf", &a[i], &b[i]);
        }

        int flg=  0;

        for(i = 1; i<=n; i++){
            p = (x1-a[i])*(x1-a[i]);
            /*p = sqrt(p);*/
            q = (y1-b[i])*(y1-b[i]);
            /*q = sqrt(q);*/

            x = (x2-a[i])*(x2-a[i]);
            /*x = sqrt(x);*/
            y = (y2-b[i])*(y2-b[i]);
            /*y = sqrt(y);*/

            d1 = sqrt(p+q);
            d2 = sqrt(x+y);
            if(d1*2<=d2){
                    flg =1;
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n", a[i], b[i]);
                break;
            }
        }

        if(flg==0) printf("The gopher cannot escape.\n");

     }
     return 0;
}
