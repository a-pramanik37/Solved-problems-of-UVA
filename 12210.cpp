#include <bits/stdc++.h>
using namespace std;
int main()
{
    int B, s, a[30000], i, c = 0, b[40000];
    while(scanf("%d%d", &B, &s)==2 ){

        if(B==0 && s==0) break;
            c++;
        for(i = 0; i <B; i++){
            scanf("%d", &a[i]);
        }
        for(i = 0; i <s; i++){
            scanf("%d", &b[i]);
        }
        sort(a, a+B);

        if(B<=s) printf("Case %d: 0\n", c);
    else printf("Case %d: %d %d\n", c, B-s, a[0]);
    }
    return 0;
}
