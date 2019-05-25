#include <stdio.h>
int main()
{
    int v, t, i, j;
    for(i = 1; i >= -100 && i <= 100; i++){
        for(j = 1; j >= 0 && j <= 200; j++){
            while(scanf("%d%d", &v, &t) != EOF){
                printf("%d\n", 2 * v * t);
            }
        }
    }
    return 0;
}
