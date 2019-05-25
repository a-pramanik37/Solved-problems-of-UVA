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
#define dec2 ll n, m, p, x, y, i, j, k, cnt,mn, ans, u, z, l, r, t;
#define dec1 int n, m, p, x, y, i, j, k, cnt,mn, ans, u,z, l, r, t;
#define mx 100006


dec2;
vector<ll>v;
ll a[mx+5];
vector<ll>b;
int main()

{
       mem(a,0);
        for(i=2; i<=mx; i++){
            if(a[i]==0){
                v.pb(i);
                for(j=i*2; j<=mx; j+=i){
                    a[j]=1;
                }
            }
        }
        //for(i=0; i<10; i++)printf("%d ", v[i]);

        //printf("\n");
        int flg=0;
        while(scanf("%lld", &n)==1 && n!=0){
             ll N=n;
            if(n<0){
                flg=1;
                n*=(-1);
                N*=(-1);
            }

            for(i=0; v[i]*v[i]<=n; i++){

                if(n%v[i]==0){

                    while(n%v[i]==0 && n>0){
                        b.pb(v[i]);
                        n/=v[i];
                    }

                }

            }
            if(n>1)b.pb(n);
            if(flg==1)N*=(-1);

             printf("%lld = ", N);

            if(flg==1){
                    printf("-1 x ");
                for(i=0; i<b.size()-1; i++){
                    printf("%lld x ",b[i]);
                }
            printf("%lld\n",b[b.size()-1]);
            }

            else{

                for(i=0; i<b.size()-1; i++){
                    printf("%lld x ",b[i]);
                }
            printf("%lld\n",b[b.size()-1]);
            }
            b.clear();
            flg=0;
        }
        return 0;
}
