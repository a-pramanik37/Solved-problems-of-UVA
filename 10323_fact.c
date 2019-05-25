#include <stdio.h>
int main()
{
    long long n, f, i;
    while(scanf("%lld", &n) != EOF){
            f = 1;

        for(i = n; i >= 1; i--){

            f = f * i;
        if(f > 6227020800) continue;
            }

        if(n > 13) printf("Overflow!\n");
        else if(f < 10000) printf("Underflow!\n");

         else printf("%lld\n", f);

    }

    return 0;
}
