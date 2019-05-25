#include <stdio.h>
int main()
{
    int n, e, f, c, i, d, p, q, count;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d%d%d", &e, &f, &c);
        d = e+f;
        count = 0;
        while(d >= c){
            p = d/c;
            q = d%c;
            d = p+q;
            count = count+p;
        }
        printf("%d\n", count);
    }
    return 0;
}
