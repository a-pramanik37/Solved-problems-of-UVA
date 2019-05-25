#include <bits/stdc++.h>
int main()
{
    long long s, d, i, a, b;

    while(scanf("%lld%lld", &s, &d)==2){
            a=0;
        for(i = s; ;i++){
            b = a;
            a =a+i;
    if(d>= b && d<=a){
        printf("%lld\n", i);
        break;
    }
        }
    }
    return 0;
}
