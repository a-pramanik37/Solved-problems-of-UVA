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
int a[cf];
vector<int>v;
int main()
{
    int i, j, k, n;

    while(scanf("%d", &n)==1){
        for(i=1; i<=n; i++)scanf("%d", &a[i]);

        v.pb(a[n]);
        for(i=n-1; i>=1; i--){
            v.pb(a[i]+a[i+1]);
        }
        reverse(v.begin(), v.end());
        for(i=0; i<v.size(); i++)printf("%d ", v[i]);
        printf("\n");
        v.clear();
    }
    return 0;
}
