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
#define MX 31650
dec1;
int a[MX];
vector<int>b, c, an;

int main()

{
        for(i=2; i<MX; i++){
            if(a[i]==0){
                    b.pb(i);
                for(j=i*2; j<MX; j+=i){
                    a[j]=1;
                }
            }
        }

        scanf("%d", &t);

        while(t--){

            scanf("%d", &n);

            for(i=0; b[i]*b[i]<=n; i++){
                if(n%b[i]==0){

                    while(n%b[i]==0 && n>0){
                        c.pb(b[i]);
                        n/=b[i];
                    }
                    if(n==1)break;
                }
            }
            if(n>7)printf("-1\n");

            else{
                    if(n>1)c.pb(n);
                /*for(i=0; i<c.size(); i++)printf("%d ",c[i]);
            printf("\n");
            c.clear();*/





                for(i=0; i<an.size(); i++)printf("%d",an[i]);

                printf("\n");
                c.clear();
                an.clear();

            }

        }
        return 0;
}
