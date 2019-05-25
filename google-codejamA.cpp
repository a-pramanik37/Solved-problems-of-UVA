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
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,t;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,t;

int main()

{
    dec2;
    ll bb[15];
    scanf("%lld", &t);

    for(i=1; i<=t; i++){
        scanf("%lld", &n);
        cnt=0;
        mem(bb, 0);
        if(n==0){
            printf("Case #%lld: INSOMNIA\n",i);
        }

        else{
              j=1;
            while(1){

              x = n*j;
              y = x;
                while(x>0){

                    p = x%10;
                    if(bb[p]==0){
                        bb[p]++;
                        cnt++;
                    }
            x/=10;
                }
                if(cnt==10)break;
                   j++;
            }
            printf("Case #%lld: %lld\n",i, y);
        }
    }
        return 0;
}
