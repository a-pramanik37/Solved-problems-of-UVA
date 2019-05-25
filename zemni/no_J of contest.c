#include <stdio.h>
#include <math.h>
int main()
{
    long long T, N, i, x;
    scanf("%lld", &T);;
    for(i = 1; i <= T; i++){
        scanf("%lld", &N);
        x = sqrt(N);
        if(x * x == N) printf("Case %ld: Yes\n", i);
        else printf("Case %lld: No\n", i);
    }
    return 0;
}
