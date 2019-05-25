#include <stdio.h>
#include <math.h>
int main()
{
    long T, N, i, x;
    scanf("%ld", &T);
    for(i = 1; i <= T; i++){
        scanf("%ld", &N);
        x = sqrt(N);
        if(x * x == N) printf("Case %ld: Yes\n", i);
        else printf("Case %ld: No\n", i);
    }
    return 0;
}
