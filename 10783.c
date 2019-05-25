#include <stdio.h>
int main()
{
    int T, i, a, b, m, j;

    scanf("%d", &T);
    for(i = 1; i <= T; i++){
            scanf("%d%d", &a, &b);
            m = 0;
        for(j = a; j <= b; j++){

            if(j % 2 == 1) m = m + j;

        }
         printf("Case %d: %d\n", i, m);
    }


    return 0;
}
