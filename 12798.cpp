#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, c, a[200004], j, flg;
    while(scanf("%d%d", &n, &m)==2){
        for(i=1; i <= n*m; i++){

                scanf("%d", &a[i]);

        }
        c= 0;
        for(i = 1; i<=(n*m); i++){
                flg = 0;
            if(i%m==0){
                for(j = i; j>(i-m); j--){
                    if(a[j]==0){
                        flg = 1;
                        break;
                    }
                }
                if(flg==0){
                    c++;
                }
            }
        }

        printf("%d\n", c);
    }
    return 0;
}
