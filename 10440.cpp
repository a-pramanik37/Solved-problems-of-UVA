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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t, time,cc;

queue<int>q;
dec1;

int main()

{
        scanf("%d", &t);

        while(t--){

            scanf("%d%d%d", &n, &time, &m);

            for(i=1; i<=m; i++){
                scanf("%d", &p);
                q.push(p);
            }
            int sum = 0;
            cnt= 0;

            while(!q.empty()){

                cc=0;
               while(1){
                cc++;
                p = q.front();
                q.pop();
                if(cc==n)break;

                else{
                    if(p!=q.front())break;
                }

               }
               if(sum<p)sum=p;
               sum+=time;
               cnt++;
               if(q.empty())continue;
                 cc=0;
               while(1){
                cc++;
                p = q.front();
                q.pop();
                if(cc==n)break;

                else{
                    if(p!=q.front())break;
                }

               }
               if(sum<p)sum=p;

               sum+=time;
               cnt++;

            }
            printf("%d %d\n",sum,(cnt+1)/2);

        }
        return 0;
}
