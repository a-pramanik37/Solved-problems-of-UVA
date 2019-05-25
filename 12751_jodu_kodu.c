#include <stdio.h>
int main()
{
    int T, N, X, K, i, j, p, sum1, sum2;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
            sum1 = 0;

        scanf("%d%d%d", &N, &K, &X);

        for(j = 1; j <= N; j++){

                sum1 = sum1 + j;
            if(j == X){
                    sum2 = 0;
                for(p = X; p<=(K+X-1); p++){
                    sum2 = sum2+p;
                }

                }
        }

    printf("Case %d: %d\n", i,sum1-sum2);
    }
    return 0;
}
