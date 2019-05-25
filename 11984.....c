#include <stdio.h>
int main()
{

    double C, d, e, T, i;
    scanf("%lf", &T);
    for(i = 1; i <= T; i++){
        scanf("%lf%lf", &C, &d);
        e = d*(5/9.0);
        printf("Case %.0lf: %.2lf\n",i, C+e);
    }
    return 0;
}
