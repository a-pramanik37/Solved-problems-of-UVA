#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    long long n,ans, t;
    scanf("%lld", &t);
    while(t--){
            scanf("%lld", &n);

       ans = (sqrt(1+8*n)-1)/2;
       printf("%lld\n", ans);
    }
    return 0;
}
