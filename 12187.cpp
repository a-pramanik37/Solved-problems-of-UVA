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

int  n, r, c;
vector<int>a[104], b[104];

void go(int x, int y)
{
    int p=a[x][y]+1;
    if(a[x][y]==n-1)p=0;

    if(y+1<c && a[x][y+1]==p)b[x][y+1]=a[x][y];
    if(y-1>=0 && a[x][y-1]==p)b[x][y-1]=a[x][y];
    if(x+1<r && a[x+1][y]==p)b[x+1][y]=a[x][y];
    if(x-1>=0 && a[x-1][y]==p)b[x-1][y]=a[x][y];

    return;

}

int main()
{
    int k, i, j, x, y;
    Boost
    while(cin>>n>>r>>c>>k &&(n+r+c+k)!=0){
            for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                        cin>>x;
                        a[i].pb(x);
                        b[i].pb(x);
                }
            }

            for(x=1; x<=k; x++){
                for(i=0; i<r; i++){
                    for(j=0; j<c; j++){
                        go(i, j);
                    }
                }
            }

            for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                    if(j==0)printf("%d", a[i][j]);
                    else printf(" %d", a[i][j]);
                }
                printf("\n");
            }

    }

}

