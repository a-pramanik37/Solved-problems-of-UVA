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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t, ind;
dec1;
string a;

vector<int>b;

int main()

{
        int cc = 0;
        while(cin>>a){
            if(a=="end")break;

            for(i=0; i<a.size(); i++){
                p = a[i];
                int flg = 0;
                mn = 987654;

               for(j=0; j<b.size(); j++){
                if(b[j]>=p){
                    x = b[j]-p;
                    if(x<=mn){
                        mn = x;
                         ind = j;
                        flg=1;
                    }
                }
               }

               if(flg==1){
                b[ind] = p;
               }
               else b.pb(p);

            }
            printf("Case %d: %d\n",++cc, b.size());
            b.clear();
        }

    return 0;
}
