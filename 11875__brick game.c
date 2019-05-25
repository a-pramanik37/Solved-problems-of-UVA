#include <stdio.h>
int main()
{
    int T, N, ara[20], i, j;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){

        scanf("%d", &N);
        for(j = 0; j < N; j++){
            scanf("%d", &ara[j]);

        }
        printf("Case %d: %d\n", i, ara[j/2]);


    }
    return 0;
}
