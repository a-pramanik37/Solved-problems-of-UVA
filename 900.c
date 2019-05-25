#include <stdio.h>
int main()

{
    long long n, i, ara[100000];
    while(scanf("%lld", &n) ==1){
            if(n==0) break;
        ara[1] = 1;
        ara[2] = 2;
        for(i = 3; i <=n; i++){
            ara[i] = ara[i-2]+ara[i-1];

        }
     printf("%lld\n", ara[n]);
    }
    return 0;
}
