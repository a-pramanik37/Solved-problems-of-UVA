#include <stdio.h>
int main()
{
    int T, N, i, j, ara[50], c, d;
    scanf("%d", &T);
    for(i = 1; i <=T; i++){
            c = 0;
            d = 0;
        scanf("%d", &N);
        for(j = 0; j < N; j++){
            scanf("%d", &ara[j]);

        }
        for(j = 0; j < N-1; j++){
            if(ara[j] > ara[j+1]){
                d++;
            }
                else if(ara[j] <ara[j+1]){
                    c++;
                }

        }



        printf("Case %d: %d %d\n", i, c, d);
    }
    return 0;
}
