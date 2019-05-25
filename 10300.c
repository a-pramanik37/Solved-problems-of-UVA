#include <stdio.h>
int main()

{
    int  n, f, a, b, c, i, d, j;
    while(scanf("%d", &n) != EOF){

        for(j = 1; j <= n; j++){
            d = 0;
            scanf("%d", &f);
        for(i = 1; i <= f ; i++){

            scanf("%d%d%d", &a, &b, &c);
        d =d + (a * c);
        }
        printf("%d\n", d);
        }

    }

    return 0;
}
