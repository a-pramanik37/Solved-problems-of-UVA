#include <stdio.h>
int main()
{
    int N, i, a, c, e = 0;
    while(scanf("%d", &N) != EOF){
             c = 0;
             e++;
             if(N==0) break;
        for(i = 1; i <= N; i++){
            scanf("%d", &a);

            if(a == 0){
                c++;
            }

        }
        printf("Case %d: %d\n", e, (N-c)-c);
    }
    return 0;
}
