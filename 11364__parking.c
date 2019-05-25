#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, i, max, min, val, j;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
            min = 100;
    max = 0;
        scanf("%d", &n);
    for(j = 1; j <= n; j++){
        scanf("%d", &val);
        if(val >  max) max = val;
        if(val < min) min = val;
    }
    printf("%d\n", 2*(max-min));
    }
    return 0;
}
