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
int a[105], n;
int vis[105][25004];
int dp(int pos, int feas){

        if(pos>n){
            return 0;
        }

        if(vis[pos][feas]!=0)return vis[pos][feas];

        int xx =0, yy=0;

        if(a[pos]<=feas)xx=a[pos]+dp(pos+1, feas-a[pos]);

        yy = dp(pos+1, feas);

        vis[pos][feas]+=max(xx, yy);
        return vis[pos][feas];
}

int main()
{
    int t, i, j, half;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        j=0;
        for(i=1; i<=n; i++){
            scanf("%d", &a[i]);
            j+=a[i];
        }
        half=j/2;

        int x = dp(1, half);
        int y = (j-x);
        x = (y-x);

        printf("%d\n", x);
        mem(vis, 0);
    }
    return 0;
}
