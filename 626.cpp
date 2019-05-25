///#############################
///    Aktaruzzaman Pramanik   #
///    CSE-44, JU, BD          #
///#############################
#include <bits/stdc++.h>
#define cf 100009
#define pb push_back
#define inf 2000000000
#define mod 1000000007
#define ll long long int
#define pii pair<int,int>
#define piii pair<pii, int>
#define pi (2.0*acos(0.0))
#define sc(n) scanf("%d", &n)
#define scd(n) scanf("%lf", &n)
#define scl(n) scanf("%lld", &n)
#define dbg printf("##Here##\n");
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define vsort(v)   sort(v.begin(),v.end())
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define Boost  ios_base::sync_with_stdio(0); cin.tie(0);
#define pcs(x) printf("Case %d:",x)
#define NL printf("\n");
using namespace std;

//int dx[] = {-1, 0, 1, 0};
//int dy[] = {0, 1, 0, -1};

//int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
//int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

int vis[105][105][105];
int a[105][105];
vector<piii>ans;
int main()
{
    int n, i, j,k ,x, y;
    Boost
    while(scanf("%d", &n)!=EOF){
            mem(a, 0);
            mem(vis, 0);
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++)cin>>a[i][j];
        }


        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                for(k=1; k<=n; k++){
                    if(a[i][j]==1 && a[j][k]==1 && a[k][i]==1){
                        if(vis[i][j][k]==0 && vis[k][i][j]==0 && vis[j][k][i]==0){
                            ans.pb(piii(pii(i, j), k));
                            vis[i][j][k]=1;
                            vis[k][i][j]=1;
                            vis[j][k][i]=1;
                        }
                    }
                }
            }
        }
        for(i=0; i<ans.size(); i++){
            printf("%d %d %d\n", ans[i].first.first, ans[i].first.second, ans[i].second);
        }
        printf("total:%d\n\n", ans.size());
        ans.clear();
    }
}

