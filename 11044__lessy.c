#include <stdio.h>
int main()
{
    int t, r, c, i, area, ans, j, a, b;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d%d", &r, &c);
        ans=(r/3)*(c/3);
        printf("%d\n", ans);
    }
    return 0;
}
