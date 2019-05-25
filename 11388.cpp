#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main()
{
    unsigned long long g, l, i, j, a, b,t;

    scanf("%llu", &t);

    for(i = 1; i<=t; i++){
        scanf("%llu%llu", &g, &l);

        if(l%g==0 || g%l==0)  printf("%llu %llu\n", g, l);

        else{
           printf("-1\n");
        }


    }
    return 0;
}
