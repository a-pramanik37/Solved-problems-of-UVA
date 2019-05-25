#include <stdio.h>
int main()

{
    int a[30000], b[30000], i, j, f1, f2, f, g1, g2, g, flg, r, c, n, x, y, C=0;


    while(scanf("%d%d%d", &r, &c, &n)==3 && r!=0 && c!=0 && n!=0){
        C++;
        for(i = 0; i<n; i++){
            scanf("%d%d", &a[i], &b[i]);
        }
        scanf("%d%d", &x, &y);


        f1 = 0;
        f2 = 0;
        f = 0;
        g1 = 0;
        g2 = 0;
        g = 0;
        flg = 0;
        for(i = 0; i<n; i++){
            if(a[i]<=x) f1 = 1;
            else if(a[i]>=x) f2 = 1;
        }
        if(f1==1 && f2==1) f=1;

        for(i = 0; i<n; i++){
            if(b[i]<=y) g1 = 1;
            else if(b[i]>=y) g2 = 1;
        }
        if(g1==1 && g2==1) g=1;

        if(g==1 && f==1 && x>0 && x<n && y>0 && y<n) flg=1;

        if(flg==0) printf("Case %d: Escaped again! More 2D grid problems!\n", C);
        else printf("Case %d: Party time! Let's find a restaurant!\n",C);
    }
    return 0;
}
