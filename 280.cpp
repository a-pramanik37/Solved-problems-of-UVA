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

vector<int>a[102], v;
int vis[105], pr[105], cnt;

void ff(int u)
{
    vis[u]=1;
    pr[u]++;

    for(int i=0; i<a[u].size(); i++){
        int z = a[u][i];
        if(vis[z]==-1){
            ff(z);
        }
    }

}

int main()
{   int x, i, j, k, y, n;
    while(scanf("%d", &n)==1 && n!=0){

        while(scanf("%d", &x)==1 && x!=0){
            while(scanf("%d", &y)==1 && y!=0){
                a[x].pb(y);
            }
        }
        scanf("%d", &x);
        for(i=1; i<=x; i++){
            scanf("%d", &y);
            mem(vis, -1);
            mem(pr, 0);

            for(j=0; j<a[y].size(); j++){
                k = a[y][j];

                ff(k);
            }

            for(j=1; j<=n; j++){
                if(pr[j]==0){
                    v.pb(j);
                }
            }
            printf("%d",v.size());
            for(j=0; j<v.size(); j++)printf(" %d",v[j]);
            printf("\n");
            v.clear();
        }
        for(i=1; i<=n; i++)a[i].clear();
    }
    return 0;
}
