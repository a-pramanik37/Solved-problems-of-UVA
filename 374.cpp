#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

long long b, p, m, ans;


long long int bigMod(long long b, long long p, long long m)

{
    long long x;
    if(p==0) return 1;

    else if(p%2==1){
        return ((b%m)*(bigMod(b, p-1, m))%m)%m;
    }
    else {
        x = bigMod(b, p/2, m);

        return ((x%m)*(x%m))%m;
    }
}

int main()

{


    while(scanf("%lld%lld%lld", &b, &p, &m)==3){
        ans = bigMod(b, p, m);
        printf("%lld\n", ans);
    }
    return 0;
}
