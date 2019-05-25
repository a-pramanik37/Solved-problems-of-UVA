#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long n;

long long f(long long p){
    if(p>=n)return 0;
    for(long long i=9; i>=2; i--){
        if(f(p*i)==0)return 1;
    }
    return 0;
}

int main()

{
    long long p, i, j, k;

    while(scanf("%lld", &n)==1){
            if(f(1)==1)printf("Stan wins.\n");
            else printf("Ollie wins.\n");
    }
    return 0;
}
