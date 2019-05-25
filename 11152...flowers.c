#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793
int main()
{
    double a, b, c, ta, bca, sca, s, r, R;
    while(scanf("%lf%lf%lf", &a, &b, &c) ==3){

        s = (a+b+c)/2;

        ta = sqrt(s*(s-a)*(s-b)*(s-c));
        R = (a*b*c)/(4*ta); /* Radius of circumcircle =(a*b*c)/(4* area of Tri)*/
        r = (ta/s);    /*radius of incircle = area of Tri/s */
        sca = (pi * r * r);
        bca = (pi * R * R);

        printf("%.4lf %.4lf %.4lf\n", bca-ta, ta-sca, sca);

    }
    return 0;
}
