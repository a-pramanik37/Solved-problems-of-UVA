#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

long long  a[100000];

int main()

{
    long long s, t, i, j, min, p, sum;

    scanf("%lld", &t);
    while(t--){
        scanf("%lld", &s);
        for(i = 1; i<=s; i++){
            scanf("%lld", &a[i]);
        }

        for(i = 1; i<=s; i++){
                sum = 0;
            for(j = 1; j<=s; j++){

                 if(i!=j) {
                    p =  a[i]-a[j];
                    if(p<0)p = p*(-1);
                    sum = sum+p;
                 }
            }
            if(i==1) min = sum;
            if(sum<min) min = sum;
        }
        printf("%lld\n", min);
    }
    return 0;
}
