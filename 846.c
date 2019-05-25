#include <stdio.h>
int main()
{
    long long t, a, b, i;
    scanf("%lld", &t);
    for(i = 1; i <= t; i++){
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", b-a-1);
    }
    return 0;
}
