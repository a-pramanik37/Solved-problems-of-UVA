#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[20000];
    int t, i, j, c = 0, len, c1, b[40], x, flg, k;

    while(scanf("%d", &t)==1){
            c++;
            int c2 = 0;
        for(i = 1; i <= t; i++){
                flg = 0;
            scanf("%s", &a);
            len = strlen(a);
    for(j = 97, x = 0; j<=122; j++){
            c1 = 0;
        for(k = 0; k<len; k++){
            if(a[k]==j){
                c1++;
            }
        }
    if(c1>0){
        b[x] = c1;
        x++;
    }

    }

    for(k = 1; k<x; k++){
        if(b[k]==b[k-1]){
            flg =1;
            break;
        }
    }
    if(flg==0) c2++;
        }
        printf("Case %d: %d\n", c, c2);
    }
    return 0;
}
