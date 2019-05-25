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
#define pi (2.0*acos(0.0))
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
dec2;
ll a[25];
int main()

{       k=0;
        while(scanf("%lld", &n)==1){

         for(i=1; i<=n; i++)scanf("%lld", &a[i]);

         mx = 0;

         for(i=1; i<=n; i++){
                ans = 1;
            for(j=i; j<=n; j++){
                ans*=a[j];
                mx = max(mx, ans);
            }
         }
         printf("Case #%lld: The maximum product is %lld.\n\n", ++k, mx);
        }
        return 0;
}
