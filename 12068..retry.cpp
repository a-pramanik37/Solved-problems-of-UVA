#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int t, i ,j, k, x, n, u, v;

    double a, p ,q, sum;

    scanf("%d", &t);

    for(x = 1; x<=t; x++){
        scanf("%d", &n);
        for(i = 1; i<=n; i++){
            scanf("%lf", &a);
            sum = sum+(1.0/a);
        }

        sum = n/sum;

        for(i = 1; ; i++){
            p = (i*sum);
            if(p-int(p)>=0  && p-int(p)<=1/10.0){
                u = int(p);
                v = i;
                break;
            }
        }
        if(u<v) a = u;
        else a = v;
        for(i = a; i>=2; i--){
            if(u%i==0 && v%i==0){
                u = u/i;
                v = v/i;

            }
        }
        printf("Case %d: %d/%d\n",x, u, v);
    }
    return 0;
}
