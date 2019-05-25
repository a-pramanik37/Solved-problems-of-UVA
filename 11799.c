#include <stdio.h>
#include <stdlib.h>
int main()
{
    int T, N, i, max, ara[10000], j;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d", &N);
        max=0;
        for(j = 0; j < N; j++){
            scanf("%d", &ara[j]);
        }
        for(j = 0; j <N; j++){
            if(max < ara[j]) max = ara[j];
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}
