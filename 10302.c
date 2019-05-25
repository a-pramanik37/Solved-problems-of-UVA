#include <stdio.h>
int main()

{
    long long i, x, m;
    while(scanf("%lld", &x) != EOF){
            m = 0;

        for(i = 1; i <= x; i++){
            m = m + (i * i * i);
        }
        printf("%lld\n", m);
    }

    return 0;
}
