#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    long long i=0, x, a[10005], p;
    while(scanf("%lld", &x)==1){

        a[i] = x;

        sort(a, a+i+1);

        if(i%2==0){
            printf("%lld\n", a[i/2]);
        }

        else{
            p = a[(i/2)]+a[(i/2)+1];
            printf("%lld\n", p/2);
        }
        i++;
    }
    return 0;
}


