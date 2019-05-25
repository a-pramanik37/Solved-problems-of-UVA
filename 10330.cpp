///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define infLL 9000000000000000000
#define infULL 18446744073709551615
#define Aktaruzzaman using
#define dbg printf("Here\n");
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define fstr ios_base:: sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 1004
#define MOD 1000000007
#define pii pair<int, int>

//int dx[]={0,1,0,-1};
//int dy[]={1,0,-1,0};
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};
template <class T> inline T bigmod(T n,T p,T m){if(p==0)return 1; if(p%2)return ((n%m)*bigmod(n,p-1,m))%m; else {T c=bigmod(n,p/2,m);return ((c%m)*(c%m))%m;}}

Aktaruzzaman Pramanik

int cap[cf];
vector<int>a[cf];
int w[cf][cf];
int vis[cf], par[cf];
int src, sink;

bool bfs()
{
    mem(vis, 0);
    mem(par, -1);
    queue<int>q;
    q.push(src);
    vis[src]=1;

    bool flg = false;

    while(!q.empty() && flg==false){
        int x = q.front();
        q.pop();



        for(int i=0; i<a[x].size(); i++){
            int y = a[x][i];
            if(vis[y]==0 && w[x][y]>0){
                    if(y==sink)flg=true;
                vis[y]=1;
                par[y]=x;
                q.push(y);
            }
        }

    }
//    if(flg==true)cout<<"true\n";
//    else printf("false\n");
    return flg;


}


int maxFlow()
{
    int tot=0;
    int cnt = 0;
    while(1){
        if(bfs()==false)break;

        int cst = inf;
        for(int v = sink; v!=src; v = par[v]){
            int u = par[v];
            cst = min(cst, w[u][v]);
        }
        //printf("Path  =\n");
        for(int v = sink; v!=src; v = par[v]){
            int u = par[v];
            //printf("%d %d\n", u, v);
            w[u][v]-=cst;
            w[v][u]+=cst;
        }

        //printf("*Cost %d = %d  and tot = %d\n", ++cnt, cst, tot);
        tot+=cst;
    }
    return tot;
}


int main()

{
     fstr
     freopen("1_No_file.txt", "w", stdout);
     int  n, m, i, j, k, x, y, p, q, c, d, b;

     src = 215;
     sink = 217;


     while(scanf("%d", &n)==1){
          mem(w, 0);
        for(i=1; i<=n; i++){
                cin>>x;
                int in = i*2;
                int out = i*2+1;
                w[in][out]+=x;
                a[in].pb(out);
                a[out].pb(in);
        }

        cin>>m;

        for(i=1; i<=m; i++){
            cin>>x>>y>>k;
            int outX = x*2+1;
            int inY = y*2;
            w[outX][inY]+=k;
            a[outX].pb(inY);
            a[inY].pb(outX);

        }

        cin>>b>>d;

        for(i=1; i<=b; i++){
            scanf("%d", &x);
            int inX = x*2;
            w[src][inX]=inf;
            a[src].pb(inX);
            a[inX].pb(src);
        }

        for(i=1; i<=d; i++){
            scanf("%d", &x);
            int outX = x*2+1;
            w[outX][sink]=inf;
            a[outX].pb(sink);
            a[sink].pb(outX);
        }



        printf("%d\n", maxFlow());

        for(i=0; i<=cf; i++)a[i].clear();

     }


}


