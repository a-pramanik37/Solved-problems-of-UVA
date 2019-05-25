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

struct data
{
    int val, in;
}ar[10009];

vector<int>a[10007];
int vis[10007], cnt, en[10009], tym;

void dfs(int u)
{
    vis[u]=1;
    ++tym;
    for(int k = 0; k<a[u].size(); k++){
        int z = a[u][k];
        if(vis[z]==0){
            dfs(z);
        }
    }
    en[u]=++tym;
}

void ddfs(int u)
{
    vis[u]=1;
    cnt++;
    for(int k =0;k<a[u].size(); k++){
        int z = a[u][k];
        if(vis[z]==0){
            ddfs(z);
        }
    }
}

bool cmp(data lhs, data rhs)
{
    return lhs.val>rhs.val;
}

int main()

{
        int t, n, m, l, i, j, x, y;
        scanf("%d", &t);

        while(t--){
            scanf("%d%d%d", &n, &m, &l);
            for(i=1; i<=m; i++){
                scanf("%d%d", &x, &y);
                a[x].pb(y);
            }

            mem(vis, 0);
            mem(en, 0);
            tym= 0;
            for(i =1; i<=n; i++){
                if(vis[i]==0){
                    dfs(i);
                }
            }
            mem(vis, 0);
             for(i=1; i<=l; i++){
                scanf("%d", &j);
                vis[j]=1;
            }
            int node=0;
            for(i=1; i<=n; i++){
                    if(vis[i]==1){
                ar[++node].in=i;
                ar[node].val=en[i];
                    }
            }

            sort(ar+1, ar+1+node, cmp);

            mem(vis, 0);
            cnt = 0;

            for(i=1; i<=node; i++){
                int p = ar[i].in;
                if(vis[p]==0){
                    ddfs(p);
                }
            }

            printf("%d\n", cnt);

             for(i=1; i<=n; i++)a[i].clear();

        }
        return 0;
}
