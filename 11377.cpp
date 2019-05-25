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


vector<int>a[2004];
vector<int>v;
queue<int>q;
int vis[3004], par[3004], n;
bool mark[3004];

void solve(int src, int des){
    int i, x;
    mem(par, -1);
    mem(vis, -1);
   vis[src]=0;
   q.push(src);

   while(!q.empty()){
    x = q.front();
    q.pop();

    for(i=0; i<a[x].size(); i++){
        int y = a[x][i];
        if(vis[y]==-1){
            vis[y] = vis[x]+1;
            par[y]=x;
            q.push(y);
        }
    }

   }

        if(vis[des]==-1)printf("-1\n");
        else{
                //printf("bal\n");

            int cnt = 0;

            i = des;

            while(1){
                v.pb(i);
                if(par[i]==-1)break;
                i = par[i];
            }

            for(int i=v.size()-1; i>=0; i--){
                if(mark[v[i]]==false)cnt++;
            }
            v.clear();
            printf("%d\n", cnt);

        }



}

int main()
{
    int t, n, m, k, i, j, x, y, c, Q;
    scanf("%d", &t);
    int cc = 0;

    while(t--){

        scanf("%d%d%d", &n, &m, &k);
        memset(mark, false, sizeof mark);
        while(k--){
            scanf("%d", &x);
            mark[x]=true;
        }

        for(i=1; i<=m; i++){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
            a[y].pb(x);
        }

        scanf("%d", &Q);
        printf("Case %d:\n", ++cc);
        while(Q--){
            scanf("%d%d", &x, &y);
            solve(x, y);
        }
        printf("\n");

    }
    return 0;
}
