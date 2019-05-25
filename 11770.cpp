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
    int val, ind;
}arr[10005];

int vis[10005];
vector<int>a[10005];
int en[10005], tym;

void dfs(int u)
{
    vis[u]=1;
    ++tym;
    for(int k=0; k<a[u].size(); k++){
        int z = a[u][k];
        if(vis[z]==0){
            dfs(z);
        }
    }
    en[u]=++tym;
}

bool cmp(data lhs, data rhs){
        return lhs.val>rhs.val;

}

void ddfs(int u)
{
    vis[u]=1;
    for(int k =0; k<a[u].size(); k++){
        int z = a[u][k];
        if(vis[z]==0){
            ddfs(z);
        }
    }
}

int main()

{
        int t, n, m, i, j, x, y;
        scanf("%d", &t);
        int cs = 0;
        while(t--){
            scanf("%d%d", &n, &m);

            for(i=1; i<=m; i++){
                scanf("%d%d", &x, &y);
                a[x].pb(y);
            }
            for(i=1;  i<=n; i++){
                arr[i].val=a[i].size();
                arr[i].ind=i;
            }

            sort(arr+1, arr+1+n, cmp);

            mem(vis, 0);
            mem(en, 0);
            tym = 0;
            for(i=1; i<=n; i++){
                    int s = arr[i].ind;
                if(vis[s]==0){
                    dfs(s);
                }
            }

            for(i=1; i<=n; i++){
                arr[i].ind=i;
                arr[i].val=en[i];
            }

            sort(arr+1, arr+1+n, cmp);

            //for(i=1; i<=n; i++)printf("%d ",arr[i].ind);
            //printf("\n");

            mem(vis, 0);
            int cnt = 0;

            for(i=1; i<=n; i++){
                    int v = arr[i].ind;
                if(vis[v]==0){
                    cnt++;
                    ddfs(v);
                }
            }

            printf("Case %d: %d\n", ++cs, cnt);
            for(i=1; i<=n; i++)a[i].clear();
        }
        return 0;
}
