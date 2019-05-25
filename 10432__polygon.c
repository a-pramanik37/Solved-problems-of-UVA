#include <stdio.h>
#include <math.h>
int main()
{
    double n, r, area;
    while(scanf("%lf%lf", &r, &n)==2){
        area = (n*r*r)/2.0*sin(2.0*3.1415926535897932384626433832795/n);
        printf("%.3lf\n", area);
    }
    return 0;
}
