#include <stdio.h>
#include <math.h>
int main()
{
    long long x, y;
    int i, t;
    scanf("%d", &t);
    printf("\n");
    for(i = 1; i <= t; i++){

        scanf("%lld", &y);
    printf("\n");
        x = sqrt(y);
        printf("%lld\n", x);
        if(i%2==0) printf("\n");
    }
    return 0;
}
