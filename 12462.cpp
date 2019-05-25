#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf -2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)

ll a[100005], ind[100005], lft[100005], r8[100005];
stack<ll>s;
int main()

{
        ll t, n, c, i, j, k, x, y;

        //scanf("%lld", &t);

        while(scanf("%lld%lld", &n, &c)==2 && n!=0 && c!=0){

            //scanf("%lld%lld", &n, &c);

            for(i=1; i<=n; i++)scanf("%lld", &a[i]);

            for(i=1; i<=n; i++){
                scanf("%lld", &x);
            }

            while(!s.empty())s.pop();

            ind[0]=0;
            s.push(inf);

            for(i=1; i<=n; i++){
                while(1){
                    if(a[i]<=s.top())s.pop();

                    else{
                        s.push(a[i]);
                        ind[s.size()-1]=i;
                        lft[i]=ind[s.size()-2]+1;
                        break;
                    }

                }
            }

            mem(ind, 0);
            ind[0]=n+1;

            while(!s.empty())s.pop();

            s.push(inf);

            for(i=n; i>=1; i--){

                while(1){
                    if(a[i]<=s.top())s.pop();

                    else{
                        s.push(a[i]);
                        ind[s.size()-1] = i;
                        r8[i]=ind[s.size()-2]-1;
                        break;
                    }

                }

            }

            ll mx = 0;
            /*for(i=1; i<=n; i++)printf("%lld ",lft[i]);
            printf("\n");

            for(i=1; i<=n; i++)printf("%lld ",r8[i]);
            printf("\n");*/

            for(i=1; i<=n; i++){
                mx= max(mx, ((r8[i]-lft[i]+1)*a[i]));
            }
            printf("%lld\n", mx);

        }
        return 0;
}
