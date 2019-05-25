#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int t , i, a, j, flg;

    scanf("%d", &t);

    for(i = 1; i<=t; i++){
            flg = 0;
        for(j = 1; j<=13; j++){
            scanf("%d", &a);
            if(a==0){
                flg= 1;
            }
        }

    if(flg==1) printf("Set #%d: No\n",i);

    else printf("Set #%d: Yes\n", i);
    }
    return 0;
}
