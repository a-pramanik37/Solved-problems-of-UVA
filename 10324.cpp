#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

char a[10000000];

int main()

{
    int x, y, flg, i, j, k, c=0, p,q, n;
    char ch;

    while(scanf("%s", a)==1){
        if(a[0]=='\0') break;
        c++;
        scanf("%d", &n);

        for(i = 1; i<=n; i++){
                int flg=  0;
            scanf("%d%d", &x, &y);
            p  = min(x, y);
            q = max(x, y);
            ch = a[p];
            for(j = p; j<=q; j++){
                if(a[j]!=ch){
                    flg = 1;
                    break;
                }
            }
            if(i==1) printf("Case %d:\n", c);
        if(flg==0) printf("Yes\n");
        else printf("No\n");
        }
    }
    return 0;
}
