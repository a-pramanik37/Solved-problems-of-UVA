#include <stdio.h>
int main()
{
    double T, L, i, r, a, w, c, Pi=3.141592654;
    scanf("%lf", &T);
    for(i = 1; i <= T; i++){

        scanf("%lf", &L);

        r = L*0.2;
        a = Pi * r * r;
        w =L*0.6;
        c = w * L;

        printf("%.2lf %.2lf\n", a, c - a);

    }

    return 0;
}
