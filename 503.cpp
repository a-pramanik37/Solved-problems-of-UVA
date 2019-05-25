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
#define dec2 ull n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
ll n, m, i, j, ans;
int main()

{
        while(scanf("%lld%lld", &n, &m)==2){
                if(n==0 && m==0)break;
            if(m>(n/2)){
                m = n-m;
            }
            ans = 1;
            for(i=0; i<m; i++){
                ans*=(n-i);
                ans/=(i+1);
            }
            printf("%lld\n", ans);

        }
        return 0;
}
