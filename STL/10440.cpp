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
dec1;

int main()

{
        scanf("%d", &k);

        while(k--){

            scanf("%d%d%d", &n, &t, &m);

            for(i=1; i<=m; i++){
                scanf("%d", &x);
               if(i==m)y =  x;
            }

            if(m%n==0)cnt = m/n;
            else cnt = (m/n)+1;

            printf("%d %d\n", y+t, cnt);

        }
        return 0;
}
