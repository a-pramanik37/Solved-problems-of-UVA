#include <stdio.h>
int main()
{
    long long x, a, b, sum, i;
    while(scanf("%lld", &x) == 1){
            if(x== 0) break;
        a = 0;
        b = 1;
        for(i = 1; i <= x; i++){
            sum = a+b;
            a = b;
            b = sum;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
