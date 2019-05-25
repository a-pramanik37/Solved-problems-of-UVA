#include <stdio.h>
int main()
{
    long long n, f, i;
    while(scanf("%lld", &n) != EOF){
            f = 1;

         for(i = n; i >= 1; i--){
            f = f * i;
        }

    if(f < 10000 && f >= 0) printf("Underflow!\n");

    else if(f > 10000 && f < 6227020800) printf("%lld\n", f);

    else if(f > 6227020800 || f < 0) printf("Overflow!\n");
    }

    return 0;
}
