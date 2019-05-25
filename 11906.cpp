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

int dx[] = {-1, -1, 1, 1};
int dy[] = {1, -1, 1, -1};

char a[105][105];
int r, c, m, n, cnt, odd, even;
int vis[105][105];

bool valid(int x, int y)
{
    if(x>=0 && x<r && y>=0 && y<c && a[x][y]=='.')return true;
    return false;
}

void dfs(int x, int y)
{
    if(x<0||x>=r||y<0||y>=c || vis[x][y]==1|| a[x][y]=='*')return;
    vis[x][y]=1;
    int koyta=0;

    if(m==0||n==0){

        //if(n==0)swap(n,m);
        int g = max(m,n);
        if(valid(x, y+g))dfs(x, y+g), koyta++;
        else if(valid(x, y-g))dfs(x, y-g), koyta++;
        else if(valid(x+g, y))dfs(x+g, y), koyta++;
        else if(valid(x-g, y))dfs(x-g, y), koyta++;
    }

    else{
    for(int i=0; i<4; i++){
        int xx = x+dx[i]*m;
        int yy = y+dy[i]*n;
        if(valid(xx, yy)){
                dfs(xx, yy);
                koyta++;
        }
        if(/*n==0 || m==0 ||*/ (m==n)){
            continue;
        }
        xx = x+dx[i]*n;
        yy = y+dy[i]*m;
        if(valid(xx, yy)){
                dfs(xx, yy);
                koyta++;
        }

    }
}
    if(koyta%2==0)even++;
    else odd++;

    return;

}

int main()
{
    int t;
    Boost
    int cc=0;

    int i, j, k,x ,y, w;
    write
    cin>>t;

    while(t--){
        cin>>r>>c>>m>>n;
        cin>>w;

        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                a[i][j]='.';
            }
        }

        for(i=1; i<=w; i++){
            cin>>x>>y;
            a[x][y]='*';
        }


        mem(vis, 0);
        odd=0;
        even=0;
        dfs(0, 0);

        pcs(++cc);
        printf(" %d %d\n", even, odd);

    }
}

