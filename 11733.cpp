#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)

int par[10008];

struct data
{
    int x, y, cst;
}a[100009];

bool cmp(data lhs, data rhs)
{
    return lhs.cst<rhs.cst;
}

int find(int u)
{
    if(par[u]==u)return u;

    int s = find(par[u]);

    par[u]=s;
    return s;

}

vector<int>g[10009];

void dfs(int v)
{
    par[v]=1;

    for(int k = 0; k<g[v].size(); k++){
        int f = g[v][k];
        if(par[f]==0){
            dfs(f);
        }
    }

}

int main()

{
        int t, n, m, x, y, p, q, ar, i, j;

        scanf("%d", &t);
        int cc = 0;
        while(t--){

            scanf("%d%d%d", &n, &m, &ar);

            for(i=1; i<=m; i++){
                scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].cst);
                g[a[i].x].pb(a[i].y);
                g[a[i].y].pb(a[i].x);
            }


            mem(par, 0);

            int cnt = 0;
            for(i=1; i<=n; i++){
                if(par[i]==0){
                    dfs(i);
                    cnt++;
                }
            }

            for(i=1; i<=n; i++){
                par[i]=i;
                g[i].clear();
            }
            sort(a+1, a+1+m, cmp);

            int cost = 0;
            int pp = 0;
            for(i=1; i<=m; i++){
                    if(pp>=n-1)break;
                int x1 = a[i].x;
                int y1 = a[i].y;

                int x2 = find(x1);
                int y2 = find(y1);

                if(x2!=y2){
                        pp++;
                    par[x2] = y2;
                    if(a[i].cst>=ar){
                        cnt++;

                    }
                    else  cost+=a[i].cst;

                }

            }
            //printf("%d\n", cost);

            printf("Case #%d: %d %d\n", ++cc, (cnt*ar)+cost, cnt);

        }
        return 0;
}
