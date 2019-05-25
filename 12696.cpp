#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, coun;
    double l, w, h, oj;
    scanf("%d", &t);
    coun = 0;
    for(i = 1; i<= t; i++){
        scanf("%lf%lf%lf%lf", &l, &w, &h, &oj);

        if(((l<=56 && w<=45 && h<=25)||((l+w+h)<=125)) && oj<=7){
            printf("1\n");
            coun++;
        }
        else printf("0\n");

        if(i==t) printf("%d\n", coun);
    }
    return 0;
}
