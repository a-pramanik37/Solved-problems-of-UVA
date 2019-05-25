#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    int n, i, a, coun;
    while(scanf("%d", &n)==1){
        coun = 0;
        for(i = 1; i<=5; i++){
            scanf("%d", &a);
            if(a==n) coun++;
        }
        printf("%d\n", coun);
    }
    return 0;
}
