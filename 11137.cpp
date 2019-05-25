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
ll cub[23];
ll a[23][10004], n;

ll dp(ll pos, ll sum)
{
    /*if(sum==0)return 1;
    if(sum<0)return 0;*/
    if(pos>21){
        if(sum==0)return 1;
        else return 0;
    }

    if(a[pos][sum]!=-1)return a[pos][sum];

    ll xx = 0, yy=0;

    if(cub[pos]<=sum)xx = dp(pos, sum-cub[pos]);
    yy = dp(pos+1, sum);

    a[pos][sum]=xx+yy;

    return a[pos][sum];

}

int main()
{
    ll i, j, k;
    for(i=1; i<=21; i++){
        cub[i]=(i*i*i);
    }
    while(scanf("%lld", &n)==1){
        mem(a, -1);
        printf("%lld\n", dp(1, n));

    }
    return 0;
}
