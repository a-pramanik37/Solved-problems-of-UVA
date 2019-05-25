#include <stdio.h>
int main()

{
    long long a, b, c;
    while(scanf("%lld%lld%lld", &a, &b, &c))
    {
        printf("0 0 0\n");
        if((a*a) + (b*b) ==c*c)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }
    return 0;
}
