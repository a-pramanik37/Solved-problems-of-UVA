///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define sc(n) scanf("%d", &n)
#define Aktaruzzaman using
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
Aktaruzzaman Pramanik

vector<int>a[204];
int vis[204], zero, one, flg;

void dfs(int x, int col)
{
    vis[x]=col;
    if(col==0)zero++;
    else one++;


    for(int i=0; i<a[x].size(); i++)
    {
        int y = a[x][i];
        if(vis[y]==-1)
        {
            int p=0;
            if(col==0)p=1;
            dfs(y, p);
        }
        else if(vis[y]==col)flg=1;
    }

}

int main()
{
    //freopen("input.txt","r",stdin)
    //freopen("output.txt","w",stdout)
    int t, n, i, j, k, x, y;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(i=1; i<=n; i++){
            scanf("%d", &j);
            for(k=1; k<=j; k++){
                scanf("%d", &x);
                if(x>n || x<1)continue;
                a[i].pb(x);
                a[x].pb(i);
            }
        }
        int ans=0;

        mem(vis, -1);
        for(i=1; i<=n; i++){
            if(vis[i]==-1)
            {
                zero = 0;
                one = 0;
                flg=0;
                dfs(i, 0);
                if(flg==0)
                {
                    ans +=max(zero, one);
                }
            }
        }
        printf("%d\n", ans);

        for(i=0; i<=n; i++)a[i].clear();
    }
    return 0;
}
