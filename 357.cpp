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
ll b[]={1, 5, 10, 25, 50};
ll a[6][30005], vis[6][30005];

ll dp(ll x, ll poysa){

       if(x>4){
        if(poysa==0)return 1;
        else return 0;
    }

        if(vis[x][poysa]!=0)return a[x][poysa];

        ll xx=0, yy=0;

        if(b[x]<=poysa)xx = dp(x, poysa-b[x]);
        yy = dp(x+1, poysa);
        a[x][poysa]=xx+yy;
        vis[x][poysa]++;
        return a[x][poysa];

}

int main()

{
        ll n, i, j;
        while(scanf("%lld", &n)==1){

            ll sum = dp(0, n);

            if(sum==1)printf("There is only 1 way to produce %lld cents change.\n", n);
            else printf("There are %lld ways to produce %lld cents change.\n", sum, n);

        }
        return 0;
}

