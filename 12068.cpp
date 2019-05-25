#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long  x, y, c, d;

long long  gcd(long long  x,long long  y);
long long  lcm(long long  x, long long  y);

int main()

{
    long long  t, i, j, k, a[1000], n, LCM, s1, s2, tem;

    scanf("%lld", &t);

    for(i = 1; i<=t; i++){
        scanf("%lld", &n);
        LCM = 1;
        for(j = 1; j<=n; j++){
            scanf("%lld", &a[j]);
             LCM = lcm(LCM, a[j]);
        }



        s2 = 0;
        for(j = 1; j<=n; j++){
            s2 = s2+LCM/a[j];
        }
        s1 = n*LCM;



   k = gcd(s1, s2);

   printf("Case %lld: %lld/%lld\n", i, s1/k, s2/k);

    }
    return 0;

}



long long  gcd(long long  x, long long  y)
{
    long long  temp;

    if(y>x){
        temp = x;
        x = y;
        y = temp;
    }

    while(y!=0){
        temp = x%y;
        x = y;
        y = temp;
    }
    return x;
}

long long  lcm(long long  x, long long  y)
{
    long long  G = gcd(x, y);

    return (x*y)/G;
}
