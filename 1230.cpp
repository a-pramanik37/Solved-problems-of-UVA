#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;


long long bp(long long x, long long y, long long n){
        long long p;
        if(y==0) return 1;

        else if(y%2==1){
            return ((x%n)*((bp(x, y-1, n))%n))%n;
        }
        else {
            p = bp(x, y/2, n);
            return ((p%n)*(p%n))%n;
        }
    }

int main()

{
    long long x, y, n, ans, t, c = 0, d;
    scanf("%lld", &t);

    for(c=1; c<=t+1; c++){

            if(c!=t+1) scanf("%lld%lld%lld", &x, &y, &n);
            if(c==t+1) scanf("%lld", &d);

        ans = bp(x, y, n);

       if(c!=t+1) printf("%lld\n", ans);


    }
    return 0;
}
