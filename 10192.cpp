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
char a[105], b[105];
int vis[105][105];

int dp(int x, int y)
{
    if(a[x]=='\0'||b[y]=='\0')return 0;

    if(vis[x][y]!=-1)return vis[x][y];

    if(a[x]==b[y]){
        vis[x][y]=dp(x+1, y+1)+1;
        return vis[x][y];
    }
    else{
    vis[x][y]=max(dp(x, y+1), dp(x+1, y));
    return vis[x][y];
    }
}

int main()
{
    int i, j;
    int cc = 0;
    while(gets(a)){
        if(strcmp(a, "#")==0)break;
        gets(b);
        mem(vis, -1);
        printf("Case #%d: you can visit at most %d cities.\n", ++cc, dp(0, 0));

    }
    return 0;
}

