#include <stdio.h>
int main()
{
    int t, r, i, l, a, b, c, w;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &r);
        l = r*5.0;
        w = r*3.0;
        a = (45.0/100)*l;
        b = (55.0/100)*l;
        c = w/2.0;
        printf("Case %d:\n-%d %d\n%d %d\n%d -%d\n-%d -%d\n", i, a, c, b, c, b, c, a, c);
    }
    return 0;
}
