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
int ar[30007];
vector<int>a[30007];
int vis[30007], cnt;
void dfs(int u)
{
    vis[u]=1;
    cnt++;
    for(int k =0; k<a[u].size(); k++){
        int z = a[u][k];
        if(vis[z]==0){
            dfs(z);
        }
    }
}

int main()

{
        int n, m, i, j, x, y, p, q;
        while(scanf("%d%d", &n, &m)==2)
        {
            if(n==0 && m==0)break;
            for(i=1; i<=m; i++){

                scanf("%d", &p);
                for(j=1; j<=p; j++){
                    scanf("%d", &ar[j]);
                    for(int k=j-1; k>=1; k--){
                        x = ar[j];
                        y = ar[k];
                        a[x].pb(y);
                        a[y].pb(x);
                    }
                }
            }
            mem(vis, 0);
             cnt = 0;
                dfs(0);
                printf("%d\n", cnt);
                for(i=0; i<n; i++)a[i].clear();
        }
        return 0;
}
