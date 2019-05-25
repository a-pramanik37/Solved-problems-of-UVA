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

int i, j,t, n, p, q, m, x, y, flg;
vector<int>a[205];
int vis[209];

void dfs(int par, int u){

        vis[u]=1;
        if(flg==1)return;
        for(int k = 0; k<a[u].size(); k++){
            int z = a[u][k];

            if(z==par)continue;

            else if(vis[z]==0){
                vis[z] = 1;
                dfs(u, z);
            }
            else{
                flg=1;
                return;
            }

        }
}

int main()

{
       while(scanf("%d", &n)==1 && n!=0){

        scanf("%d", &m);

        for(i=1; i<=m; i++){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
            a[y].pb(x);

        }

        mem(vis, 0);


        flg = 0;

       dfs(0 ,0);

        if(flg==0)printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

        for(i=0; i<n; i++)a[i].clear();

       }
        return 0;
}
