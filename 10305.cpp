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
vector<int>a[105];
int st[105], en[105], vis[105];
int t;

struct data
{
    int ind, val;
}ar[105];

void dfs(int u)
{
    vis[u]=1;
    st[u]=++t;
    for(int k=0; k<a[u].size(); k++){
        int p = a[u][k];
        if(vis[p]==0){
            dfs(p);
        }
    }
    en[u]=++t;

}

bool cmp(data lhs, data rhs){
        return lhs.val>rhs.val;
}

int main()

{
        int n ,m, i, j, x, y;
        while(scanf("%d%d", &n, &m)==2){
                if(n==0 && m==0)break;
            for(i = 1; i<=m; i++){
                scanf("%d%d", &x, &y);
                a[x].pb(y);
            }
            mem(vis, 0);
            mem(st, 0);
            mem(en, 0);
            t=0;
            for(i=1; i<=n; i++){
                if(vis[i]==0){
                    dfs(i);
                }
            }

            for(i=1; i<=n; i++){
                ar[i].ind=i;
                ar[i].val = en[i];
            }
            /*for(i=1; i<=n; i++)printf("%d ",en[i]);
            printf("\n");*/
            sort(ar+1, ar+1+n, cmp);

            for(i=1; i<=n; i++){
                if(i==1)printf("%d",ar[i].ind);
                else printf(" %d",ar[i].ind);
                a[i].clear();
            }
            printf("\n");

        }
        return 0;
}
