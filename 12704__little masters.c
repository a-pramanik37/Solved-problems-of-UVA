#include <stdio.h>
#include <math.h>
int main()
{
    double T, x, y, r, i, sb, lb, hyp;
    scanf("%lf", &T);
    for(i = 1; i <= T; i++){
        scanf("%lf%lf%lf", &x, &y, &r);
        hyp = sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n", r-hyp, r+hyp);
    }
    return 0;
}
