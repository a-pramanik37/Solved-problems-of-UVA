#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
   long  n, i, j, mi, t, a[100005], k;

   scanf("%ld", &t);
   for(i = 1; i<=t; i++){
    scanf("%ld", &n);

    a[0] = 0;

     mi = 0;

    for(j = 1; j<=n; j++){
        scanf("%ld", &a[j]);

        if((a[j]-a[j-1])>mi) mi = a[j]-a[j-1];
    }

   k = mi;

   int flg = 0;



    for(j = 1; j<=n; j++){

            if((a[j]-a[j-1])>k) {
                    flg = 1;
                    break;
            }

        else if(a[j]-a[j-1]==k){
            k--;
        }
    }

    if(flg == 1 || k<0) printf("Case %ld: %ld\n", i, mi+1);

    else printf("Case %ld: %ld\n", i, mi);


   }
   return 0;
}
