//-_-
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
vector<int>a[50004];
stack<int>st;
int vis[50005], save[50005];

int dfs(int x)
{
    //if(vis[x]==0)return save[x];
    vis[x]=0;
    if(a[x].size()==0)return save[x]=1;
    for(int i=0; i<a[x].size(); i++){
        int y = a[x][i];
        if(vis[y]==-1){
            save[x] += (1+dfs(y));
        }
        else{
            save[x]+=(save[y]-1);
        }
    }
    return save[x];

}


int main()
{
    int t, n, i, j, k, x, y, cnt, mx, ans;
    int cc=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);

        for(i=1; i<=n; i++){
            scanf("%d%d", &x, &y);
            if(x!=y)a[x].pb(y);
        }




            mem(vis, -1);
            mem(save, 0);

        for(i=1; i<=n; i++){
            printf(">> %d\n", dfs(i));
        }

       //printf("%d\n", ans);
    }
    return 0;
}
