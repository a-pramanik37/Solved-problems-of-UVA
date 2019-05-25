#include <stdio.h>
int main()
{
    int r, n, d, c=0;

    while(scanf("%d%d", &r, &n)==2){
        if(n==0 && r==0) break;
        c++;

        d = r-n;
        if((n+n*26)<r) printf("Case %d: impossible\n", c);

        else if(r<=n) printf("Case %d: 0\n", c);

        else if(d%n==0) printf("Case %d: %d\n", c, d/n);

        else printf("Case %d: %d\n", c, (d/n)+1);
    }
    return 0;
}
