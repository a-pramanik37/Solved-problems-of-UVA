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
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t,sum;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;

queue<ll>lq, rq;
char s[10];
dec2;
int main()

{
        scanf("%lld", &t);

        while(t--){

            scanf("%lld%lld", &l, &m);

            l = l*100;

            for(i=1; i<=m; i++){
                scanf("%lld%s", &p, s);
                if(strcmp(s, "left")==0)lq.push(p);
                else rq.push(p);
            }

            cnt=0;

            while(!lq.empty() || !rq.empty()){

                sum = 0;
                if(lq.empty() && !rq.empty())cnt++;
                if(!lq.empty()){
                    cnt++;
                    while(!lq.empty()){
                        x = lq.front();
                        if(sum+x>l)break;
                        else{
                            sum+=x;
                            lq.pop();
                        }
                    }

                }
                sum = 0;

                if(!lq.empty() && rq.empty()){
                    cnt++;
                    continue;
                }

                 if(!rq.empty()){
                    cnt++;
                    while(!rq.empty()){
                        x = rq.front();
                        if(sum+x>l)break;
                        else{
                            sum+=x;
                            rq.pop();
                        }
                    }
                }

            }
            printf("%lld\n",cnt);

        }
        return 0;
}
