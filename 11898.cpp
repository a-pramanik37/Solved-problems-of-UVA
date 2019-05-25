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
#define cf 200009
int a[cf];
int main()
{
    int t, n, i, j, q, l, r, mn, k;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i=1; i<=n; i++){
            scanf("%d", &a[i]);
        }

        scanf("%d", &q);
        while(q--){
            scanf("%d%d", &l, &r);
            mn=inf;

            for(i=l; i<r; i++){
                for(j=i+1; j<=r; j++){
                    k = a[i]-a[j];
                    if(k<0)k*=(-1);
                    mn=min(mn, k);
                    if(mn==0)break;
                }
                if(mn==0)break;
            }
            printf("%d\n", mn);
        }
    }
    return 0;
}
