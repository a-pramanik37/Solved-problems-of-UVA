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
vector<int>a[2008];
int vis[2008], cnt;

void dfs(int u){

    vis[u]=1;
    cnt++;
    for(int k=0; k<a[u].size(); k++){
        int y = a[u][k];
        if(vis[y]==0){
            dfs(y);
        }
    }

}

int main()

{
        int n, m, i,c, x, y;
        while(scanf("%d%d", &n, &m)==2){
                if(m==0 && n==0)break;
            for(i=1; i<=m; i++){
                scanf("%d%d%d", &x, &y, &c);
                if(c==1)a[x].pb(y);
                else{
                    a[x].pb(y);
                    a[y].pb(x);
                }
            }
            int flg=0;
            for(i=1; i<=n; i++){
                cnt=0;
                mem(vis,0);
                dfs(i);
                if(cnt!=n){
                    flg=1;
                    break;
                }
            }
            if(flg==0)printf("1\n");
            else printf("0\n");
            for(i=1; i<=n; i++)a[i].clear();

        }
        return 0;
}
