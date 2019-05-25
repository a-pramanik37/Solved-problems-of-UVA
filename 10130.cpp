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

struct dt
{
    int w, c;
}ob[1005];

bool cmp(dt lhs, dt rhs)
{
    return lhs.w<rhs.w;
}

int a[1005][35];
int vis[1005][35];
int jinis;
int dp(int n, int m){
    int x, y;
        if(n>jinis)return 0;
        if(ob[n].w>m)return 0;

        if(vis[n][m]!=-1)return a[n][m];

       x=dp(n+1, m-ob[n].w)+ob[n].c;
       y=dp(n+1, m);
        a[n][m]=max(x, y);
        vis[n][m]++;
        return a[n][m];
}

int main()
{
        int t, n, p, x, y, g, i, j;

        scanf("%d", &t);

        while(t--){
                mem(a, 0);
        mem(vis, -1);
            scanf("%d", &jinis);
            for(i=1; i<=jinis; i++){
                scanf("%d%d", &ob[i].c, &ob[i].w);
            }
            sort(ob+1, ob+jinis+1, cmp);

            //for(i=1; i<=jinis; i++)printf("%d %d\n", ob[i].w, ob[i].c);

            int sum = 0;
            scanf("%d", &g);
            while(g--){
                scanf("%d", &x);
                //printf("%d\n",dp(1, x));
                sum+=dp(1, x);
            }
            printf("%d\n", sum);
        }
        return 0;
}

