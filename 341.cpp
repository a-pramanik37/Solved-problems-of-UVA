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
typedef pair<int, int>pii;

vector<pii>a[cf];
priority_queue<pii, vector<pii>, greater<pii> >q;
int vis[cf];
int par[cf];
int main()
{
    int n  , i, j, src, des, x, y, c, m;
    int cc=0;
    while(scanf("%d", &n)==1){
            if(n==0)break;
        for(i=1; i<=n; i++){
            scanf("%d", &m);
            while(m--){
                scanf("%d%d", &y, &c);
                a[i].pb(pii(y, c));
                //a[y].pb(pii(i, c));
            }
        }

        scanf("%d%d", &src, &des);
        for(i=1; i<=n; i++)vis[i]=inf;
        vis[src]=0;
        par[src]=src;
        q.push(pii(src, 0));

        while(!q.empty()){
            x = q.top().first;
            q.pop();

            for(i=0; i<a[x].size(); i++){
                y = a[x][i].first;
                c = a[x][i].second;
                if(vis[x]+c<vis[y]){
                    vis[y]=vis[x]+c;
                    par[y]=x;
                    q.push(pii(y, vis[y]));
                }
            }

        }


        vector<int>v;

        i=des;
        while(1){
                v.pb(i);
            if(par[i]==i)break;
            i = par[i];
        }
        printf("Case %d: Path =",++cc);
        for(i=v.size()-1; i>=0; i--){
            printf(" %d",v[i]);
        }
        cout<<";";
        printf("% d ", vis[des]);
        cout<<"second delay"<<endl;
        v.clear();
        for(i=1; i<=n; i++)a[i].clear();

    }
    return 0;
}
