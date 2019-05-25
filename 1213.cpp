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
#define cf 1125
ll p[cf], n, k;
vector<ll>a;
ll vis[190][16][1122];
ll dp(ll pos, ll koyta, ll feas)
{

    if(feas==n){
        if(koyta==k)return 1;
        else return 0;
    }
    if(a[pos]>n)return 0;
    if(feas>n)return 0;
    if(koyta>k)return 0;

    if(vis[pos][koyta][feas]!=-1)return vis[pos][koyta][feas];

    ll xx=0, yy=0;

    xx = dp(pos+1, koyta+1, feas+a[pos]);
    yy = dp(pos+1, koyta, feas);

    vis[pos][koyta][feas]=xx+yy;
    return vis[pos][koyta][feas];
}

int main()
{
    ll i, j;
    int cnt = 0;
    for(i=2; i<=cf; i++){
        if(p[i]==0){
                cnt++;
                a.pb(i);
            for(j=i*2; j<=cf; j+=i){
                p[j]=1;
            }
        }
    }
    //printf("%d\n", cnt);

    ll x, y;

    while(scanf("%lld%lld", &n, &k)==2){

        if(n==0 && k==0)break;
        mem(vis, -1);
        printf("%lld\n", dp(0, 0, 0));

    }
    return 0;
}
