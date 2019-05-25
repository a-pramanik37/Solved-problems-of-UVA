#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, s, area, i;
    for(i = 1; i<= 1000; i++){
            scanf("%lf%lf%lf", &a, &b, &c);
        s =(a+b+c)/2;
        area = ((4.0/3.0)*sqrt(s*(s-a)*(s-b)*(s-c)));
        if(area >0){
        printf("%.3lf\n", area);
        }
       else {
            area = -1;
            printf("%.3lf\n", area);
       }
    }
    return 0;
}
