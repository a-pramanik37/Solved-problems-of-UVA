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
vector<ll>a[202];
ll vis[202][101];
ll n;

ll dp(ll ro, ll co){


        if(co>=a[ro].size() || co<0)return 0;

    if(ro>=n*2-1){
        if(co>=0 && co<a[ro].size())return a[ro][co];
        else return 0;
    }

    if(vis[ro][co]!=0)return vis[ro][co];

    ll xx =a[ro][co], yy=a[ro][co];

    if(a[ro].size()<a[ro+1].size()){
        xx += dp(ro+1, co);
        yy += dp(ro+1, co+1);
    }

    else if(a[ro].size()>a[ro+1].size()){
        xx += dp(ro+1, co-1);
        yy += dp(ro+1, co);
    }
    //printf("XX ar YY er value: %lld %lld\n", xx, yy);

    vis[ro][co]+=max(xx, yy);
    //printf("node er value: %lld\n", vis[ro][co]);
    return vis[ro][co];


}

int main()
{
    ll t, i, j, k, x;

    scanf("%lld", &t);

    ll cc=0;

    while(t--){
        scanf("%lld", &n);
        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                scanf("%lld", &k);
                a[i].pb(k);
            }
        }


        for(i=n+1,k=n-1; i<=(n*2)-1; i++, k--){
            for(j=1; j<=k; j++){
                scanf("%lld", &x);
                a[i].pb(x);
            }
        }

        /*for(i=1; i<=n*2-1; i++){
            for(j=0; j<a[i].size(); j++){
                printf("%lld ",a[i][j]);
            }
            printf("\n");
        }*/

        printf("Case %lld: %lld\n",++cc, dp(1, 0));

        for(i=1; i<=n*2-1; i++)a[i].clear();

        mem(vis, 0);

    }
    return 0;
}
