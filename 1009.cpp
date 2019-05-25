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

    int t, a[100006], u, v, i, j, n, maxx;

    scanf("%d", &t);

    for(i = 1; i<=t; i++){

        scanf("%d", &n);
        memset(a, 0, sizeof a);

        int vamp = 0;
        int lyk = 0;

        for(j = 1; j<=n; j++){
            scanf("%d%d", &u, &v);


        }
        int coun = 0;

        for(j = 1; j<=maxx; j++){
            if(a[j]==1){
                coun++;
            }
        }

        printf("Case %d: %d\n", i, coun);
    }
    return 0;
}
