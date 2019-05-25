#include <bits/stdc++.h>
using namespace std;
int main()

{
    long long int a[10], t, i, j;

    scanf("%lld", &t);
    for(i = 1; i<=t; i++){

    scanf("%lld", &a[0]);
    scanf("%lld", &a[1]);
    scanf("%lld", &a[2]);
    scanf("%lld", &a[3]);

    sort(a, a+4);

    if(a[0]==a[1] && a[0]==a[2] && a[2]==a[3]) printf("square\n");
    else if(a[0]==a[1] && a[2]==a[3] && a[0]!=a[2]) printf("rectangle\n");
    else if(a[3]>=a[1]+a[2]+a[0]) printf("banana\n");
    else printf("quadrangle\n");


    }
    return 0;
}
