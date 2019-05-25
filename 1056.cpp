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
map<string, int>mp;
vector<int>a[55];
int vis[55], par[55], n;
string s1, s2;
queue<int>q;
/*int f(int u){
    if(par[u]==u)return u;
    int s = f(par[u]);
    par[u]=s;
    return s;
}*/

int bfs(int src){
    mem(vis, -1);
    q.push(src);
    vis[src]=0;
    int mx = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(int i=0; i<a[x].size(); i++){
            int y = a[x][i];
            if(vis[y]==-1){
                vis[y] = vis[x]+1;
                q.push(y);
                mx = max(mx, vis[y]);
            }
        }
    }

    for(int i=1; i<=n; i++){
        if(vis[i]==-1){
            return -1;
        }
    }

    return mx;
}

int main()
{
    int m, i, j, k, p, q, x, y, src;
    int cc=0;
    while(scanf("%d%d", &n, &m)==2){
        if(n==0 && m==0)break;
        int sz=0;
        mp.clear();
        for(i=1; i<=n; i++)par[i]=i;
        for(i=1; i<=m; i++){
            cin>>s1>>s2;
            if(mp[s1]==0){
                mp[s1]=++sz;
            }
            if(mp[s2]==0){
                mp[s2]=++sz;
            }
            x = mp[s1];
            y = mp[s2];
            a[x].pb(y);
            a[y].pb(x);
            /*p = f(x);
            q = f(y);
            if(p!=q){
                par[p]=q;
            }*/
        }
        printf("Network %d: ", ++cc);

        int flg=0;


        /*if(flg==1){

            for(i=1; i<=n; i++)a[i].clear();
            continue;
        }*/
        int mx=0;
        for(j=1; j<=n; j++){
            y = bfs(j);
            if(y==-1){
                flg=1;
                break;
            }
            mx = max(mx, y);
        }
        if(flg==1)printf("DISCONNECTED\n\n");

        else printf("%d\n\n", mx);

        for(i=1; i<=n; i++)a[i].clear();
    }
    return 0;
}
