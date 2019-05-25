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
int a[1004];
int main()
{
    int t, n, i, j, k, ans, cnt;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        ans=0;
        for(i=1; i<=n; i++){
            scanf("%d", &a[i]);
            k = a[i];
            cnt=0;
            for(j=1; j<i; j++){
                if(a[j]<=k)cnt++;
            }
            ans+=cnt;
        }
        printf("%d\n", ans);
    }
    return 0;
}
