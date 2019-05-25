#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
#define MX 2000009
ll par[MX];


struct data
{
    ll x, y, cst;
}a[MX];


bool cmp(data lhs, data rhs){

        return lhs.cst<rhs.cst;

}


ll find(ll u)
{
    if(par[u]==u)return u;

    ll s = find(par[u]);
    par[u] = s;
    return s;
}

int main()

{
        ll n, m, i, j, k, x, y;

        while(scanf("%lld%lld", &n, &m)==2){

            if(n==0 && m==0)break;

            for(i=1; i<=m; i++){
                scanf("%lld%lld%lld", &a[i].x, &a[i].y, &a[i].cst);
            }

            for(i=0; i<n; i++)par[i]=i;

            sort(a+1, a+m+1, cmp);
            ll cnt = 0;
            ll mx = 0;

            for(i=1; i<=m; i++){
                ll x1 = a[i].x;
                ll y1 = a[i].y;

                ll x2 = find(x1);
                ll y2 = find(y1);

                if(x2!=y2){
                    par[x2]=y2;
                    mx = max(mx, a[i].cst);
                    cnt++;

                }

            }

            if(cnt<n-1)printf("IMPOSSIBLE\n");
            else printf("%lld\n" ,mx);

        }
        return 0;
}
