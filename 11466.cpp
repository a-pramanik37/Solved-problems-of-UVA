#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back
#define M 10000005
ll a[M];

int main()

{
    ll i, j,k, n, p, q, x, cnt, mx;
    a[0]=1;
    a[1]=1;
    for(i=2; i<=M; i++){
        if(a[i]==0){
            for(j=i*2; j<=M; j=j+i){
                a[j]=1;
            }
        }
    }

    while(scanf("%lld", &n)==1 && n!=0){
        ll sq = sqrt(n);
        cnt = 0;
        mx = -37;
        for(i=2; i<=sq; i++){
            if(n%i==0){
                x = n/i;
                if(a[x]==0)cnt++;
                if(a[i]==0)cnt++;
                if(a[i]==0 && i>mx)mx=i;
                if(a[x]==0 && x>mx)mx=x;
            }
        }
        if(cnt<2)printf("-1\n");
        else printf("%lld\n",mx);
    }
    return 0;
}
