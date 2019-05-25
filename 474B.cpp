#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back
ll a[100005], s[100005];
int main()

{

    ll n, m, i, j, k, p, q, x, y,ans;

    while(scanf("%lld", &n)==1){

        for(i = 1; i<=n; i++){
            scanf("%lld", &a[i]);
        }

        s[0]=0;
        for(i=1; i<=n; i++){
            s[i] = s[i-1]+a[i];
        }

        //for(i=1; i<=n; i++)printf("%lld ",s[i]);
        //printf("\n");

        scanf("%lld", &m);

        for(i = 1; i<=m; i++){
            scanf("%lld", &x);

            ll high = n, low = 1;

            ll mid;

            while(low<=high){
                mid = (low+high)/2;
                if(s[mid]==x){
                    ans = mid;
                    break;
                }

                else if(x<s[mid]){
                    if(x>s[mid-1]){
                        ans = mid;
                        break;
                    }
                    else high=mid-1;
                }
                else if(x>s[mid]){
                    if(x<s[mid+1]){
                        ans = mid+1;
                        break;
                    }
                    else low = mid+1;
                }
            }
            printf("%lld\n",ans);
        }

    }
    return 0;
}
