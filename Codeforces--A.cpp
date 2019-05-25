#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    int n, m, i, j, k, a[1000], x, y, flg;

    while(scanf("%d%d", &n, &m)==2){
            memset(a, 0, sizeof a);

        for(i = 1; i<=n; i++){
            scanf("%d", &x);

        for(j = 1; j<=x; j++){
                scanf("%d", &y);
            if(a[y]==0) a[y]=1;
        }
        }
        flg = 0;

        for(i = 1;i <=m; i++){
            if(a[i]==0){
                flg= 1;
                break;
            }
        }

        if(flg==1) printf("NO\n");

        else printf("YES\n");
    }
    return 0;
}
