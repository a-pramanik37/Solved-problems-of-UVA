#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 200000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
ll a[cf];

int main()
{
    ll n, s, i,  j;

    while(scanf("%lld%lld", &n, &s)==2){

        for(i=1; i<=n; i++){
            scanf("%lld", &a[i]);
        }
        ll mn = inf;
        int flg = 0;
        ll st = 1;
        ll sum = 0;
        for(i=1; i<=n; i++){
            sum+=a[i];
            while(sum>=s){
                    flg=1;
                mn = min(mn, i-st+1);
                sum-=a[st];
                st++;
            }
        }
        if(flg==0)printf("0\n");
        else printf("%lld\n", mn);

    }
    return 0;
}
