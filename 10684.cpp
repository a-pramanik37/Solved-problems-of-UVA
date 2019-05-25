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
ll a[10009];

int main()

{
        while(scanf("%lld", &n)==1 && n!=0){

            for(i=1; i<=n; i++){
                scanf("%lld", &a[i]);
            }

            mx = 0;
            x =0 ;
            for(i=1; i<=n; i++){
                x+=a[i];
                if(x<=0)x=0;
                else{
                    mx = max(mx, x);
                }
            }

            if(mx>0) printf("The maximum winning streak is %lld.\n",mx);
            else printf("Losing streak.\n");

        }
        return 0;
}
