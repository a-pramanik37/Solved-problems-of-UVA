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
int main()
{
    int n, c, i, j, k;
    while(scanf("%d%d", &n, &c)==2){

        for(i=1; i<=n; i++)scanf("%d", &a[i]);
        int cnt = 1;

        for(i=2; i<=n; i++){
            if(a[i]-a[i-1]<=c)cnt++;
            else{
                cnt=1;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
