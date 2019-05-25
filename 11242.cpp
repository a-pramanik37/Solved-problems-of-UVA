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

    char a[30000];

    int r, c, i, j, coun, k;

    while(scanf("%d%d", &r, &c)){

            coun = 0;
        for(i = 1; i<=r; i++){
            for(j = 1; j<=c; j++){
                scanf("%c", &a[i]);
            }
    for(k = c; k>1; k--){
        if(a[k]!= a[k-1] && a[k]!=a[k+1]) coun++;
    }
        }

        printf("%d\n", coun);
    }

    return 0;
}
