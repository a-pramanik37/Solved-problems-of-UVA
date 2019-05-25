#include <stdio.h>
int main()
{
    int T, N, K, P, i;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d%d%d", &N, &K, &P);
        if((K+P) % N != 0) printf("Case %d: %d\n", i, (K+P) % N);

        else printf("Case %d: %d\n", i, N);


    }

    return 0;
}
