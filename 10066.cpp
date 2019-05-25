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

int a[102], b[102], n, m, vis[102][102];
int dp(int x1, int y1){

    if(x1>n || y1>m)return 0;
    if(vis[x1][y1]!=0)return vis[x1][y1];

    if(a[x1]==b[y1]){
        vis[x1][y1]=1+dp(x1+1, y1+1);
        return vis[x1][y1];
    }
    else{
        int xx = dp(x1+1, y1);
        int yy = dp(x1, y1+1);
        vis[x1][y1]=max(xx,yy);
        return vis[x1][y1];
    }


}

int main()
{
    int i, j;
    int cc=0;
    while(scanf("%d%d", &n, &m)==2 && n!=0 && m!=0){
        for(i=1; i<=n; i++)scanf("%d", &a[i]);
        for(i=1; i<=m; i++)scanf("%d", &b[i]);
        printf("Twin Towers #%d\n", ++cc);
        printf("Number of Tiles : %d\n\n", dp(1, 1));
        mem(vis, 0);
    }
    return 0;
}
