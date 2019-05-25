#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int t, i;
    double n, total, a, b, c, d, e, x, y;

    scanf("%d", &t);
    for(i = 1; i<=t; i++){

        scanf("%lf", &n);
        total = 0;

       if(n<=180000){
        total = 0.0;
       }

       else if(n<=480000){
        total = (n-180000.0)*(1/10.0);
       }

       else if(n<=880000){
        a = (n-480000.0)*(15/100.0);

        total = a+(300000.0)*(1/10.0);
       }

       else if(n<=1180000){


            a = (n-880000.0)*(20/100.0);

            total = a+(300000.0)*(1/10.0)+(400000.0)*(15/100.0);

       }

       else if(n>1180000.0){

        a = (n-1180000.0)*(1/4.0);

        total = a+(300000.0)*(1/10.0)+(400000.0)*(15/100.0)+(300000.0)*(20/100.0);
       }
       if(total<2000.0 && total>0.00) total = 2000.0;

      if(total-(int)total!=0){
        total = (total-(total-(int)total))+1;
      }

        printf("Case %d: %.lf\n",i, total);
    }
    return 0;
}
