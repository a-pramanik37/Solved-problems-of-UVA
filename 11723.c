#include <stdio.h>
int main()
{
    int t, i=0, r, n, ans;
    while(scanf("%d%d", &r, &n)==2){
            i++;
            if(r==0 && n==0) break;
            ans = r/n;
            if(ans>26) printf("Case %d: impossible\n", i);
            else printf("Case %d: %d\n", i, ans);

    }
    return 0;
}
