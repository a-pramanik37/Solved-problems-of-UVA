#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
int a[cf], tab[18][cf], ind[cf];

int query(int l, int r){
        int d = (r-l)+1;
        int x = 31-(__builtin_clz(d));
        return max(tab[x][l], tab[x][r-(1<<x)+1]);
}

int main()

{
        int n, q, i, j, k, r, c, x, y;
        while(scanf("%d", &n)==1){
            if(n==0)break;
            scanf("%d", &q);

            for(i=1; i<=n; i++){
                scanf("%d", &a[i]);
            }

            tab[0][1]=1;

            int cnt=1;
            for(i=2; i<=n; i++){
                if(a[i]==a[i-1]){
                    tab[0][i]=++cnt;
                }
                else{
                    tab[0][i]=1;
                    cnt=1;
                }
            }

            /*for(i=1; i<=n; i++)printf("%d ", b[i]);
            printf("\n");*/

            ind[n]=n;
            for(i=n-1; i>=1; i--){
                if(a[i]==a[i+1]){
                    ind[i]=ind[i+1];
                }
                else ind[i]=i;
            }

            /*for(i=1; i<=n; i++)printf("%d " ,ind[i]);
            printf("\n");*/

            for(r=1; (1<<r)<=n; r++){
                for(c=1; c+(1<<(r-1))<=n; c++){
                    tab[r][c]=max(tab[r-1][c], tab[r-1][c+(1<<(r-1))]);
                }
            }

            /*for(i=1; i<=n; i++)printf("%d ",tab[0][i]);
            printf("\n");*/



            for(i=1; i<=q; i++){
                scanf("%d%d", &x, &y);
                if(a[x]==a[y])printf("%d\n", y-x+1);
                else{
                    int p = ind[x]-x+1;
                    int q = query(ind[x]+1, y);
                    printf("%d\n", max(p,q));
                }
            }


        }
        return 0;
}
