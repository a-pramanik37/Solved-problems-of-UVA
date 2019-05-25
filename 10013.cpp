#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

long long  a[1000004];
long long  b[1000005];
long long  c[1000004];

int main()

{
    long long  i, j, k, sum, t, n, x, y, v;

    scanf("%lld", &t);

    for(x = 1; x<=t; x++){



        scanf("%lld", &n);
        for(i = 1; i<=n; i++){
           scanf("%lld%lld", &a[i], &b[i]);

        }

        sum = 0;
        k = n;
        for(i = n; i>=1; i--){

            sum = sum+a[i]+b[i];
            if(sum<10){
                c[k] = sum;
                sum = 0;
                k--;
            }
            else if(sum>9){
                c[k] = sum%10;
                sum = 1;
                k--;
            }
        }


        for(i = 1; i<=n; i++){
            printf("%lld", c[i]);
        }
        printf("\n");
        if(x!=t) printf("\n");

    }
    return 0;

}
