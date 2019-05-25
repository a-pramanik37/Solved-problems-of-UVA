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
ll a[cf];
int main()
{
    ll t, n, ta, td, h, i, j, k;
    scanf("%lld", &t);

    ll cc=0;

    while(t--){
        scanf("%lld%lld%lld%lld", &n, &h, &ta, &td);

        for(i=1; i<=n; i++)scanf("%lld", &a[i]);
        sort(a+1, a+n+1);

        ll sum=0,st = 1, en=n;

        while(1){
            if(st==en){
                sum+=ta;
                break;
            }
            else if(st>en)break;
            if(a[st]+a[en]<h){
                sum+=td;
                st++;
                en--;
            }
            else{
                sum+=ta;
                en--;
            }
        }
        sum = min(sum, ta*n);
        printf("Case %lld: %lld\n", ++cc, sum);
    }
    return 0;
}
