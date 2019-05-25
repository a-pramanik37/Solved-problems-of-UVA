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

int main()
{
    ll z, i, m, l, j, cnt, seed;
    ll cc=0;
    while(scanf("%lld%lld%lld%lld", &z, &i, &m, &l)==4){

        seed=l;
        l = (z*l+i)%m;
        cnt=1;

        while(1){
                if(l==seed)break;
            cnt++;
            l = (z*l+i)%m;
        }
        printf("Case %lld: %lld\n", ++cc, cnt);
    }
    return 0;
}
