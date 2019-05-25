#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()

{
    double x1, y1, x2, y2, x3, y3, a, b, c, s, area, r;

    while(scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3)==6){

        a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

        r = (a*b*c)/sqrt((a+b+c)*(b+c-a)*(a+c-b)*(a+b-c));

        area = 2*r*3.141592653589793;

        printf("%.2lf\n", area);

    }
    return 0;
}
