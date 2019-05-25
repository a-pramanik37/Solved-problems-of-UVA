#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    long long t, i, j, k, a[100], n;
    a[0] = 0;
    a[1]=2;
    a[2] = 3;
    for(i = 3; i<=50; i++){
        a[i] = a[i-1]+a[i-2];
    }

    scanf("%lld", &t);

    for(i = 1; i<=t; i++){
        scanf("%lld", &n);

        printf("Scenario #%lld:\n", i);
        printf("%lld\n", a[n]);
        printf("\n");
    }
    return 0;
}
