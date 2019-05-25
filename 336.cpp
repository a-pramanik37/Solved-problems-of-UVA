#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back


int main()

{
    vector<ll>a[100000];
    set<ll>s;
    queue<ll>q;
    ll vis[10010];
    ll i, j, k, p, x, y, c, d, cnt,src,ttl,cc=1,n;
    while(scanf("%lld", &n)==1 && n!=0){

        for(i=1; i<=n; i++){
          scanf("%lld%lld", &x, &y);
          a[x].pb(y);
          a[y].pb(x);
          s.insert(x);
          s.insert(y);
        }
        int z = s.size();
        while(scanf("%lld%lld", &src, &ttl)==2){
                if(src==0 && ttl==0)break;
            cnt = 0;
            mem(vis, -1);
            vis[src]=0;
            q.push(src);

            while(!q.empty()){
                x = q.front();
                q.pop();

                for(i=0; i<a[x].size(); i++){
                    y = a[x][i];
                    if(vis[y]==-1){
                        vis[y] = vis[x]+1;
                        q.push(y);
                        if(vis[y]>0 && vis[y]<=ttl)cnt++;
                    }
                }

            }
            int flg = 0;
            for(i=0; i<z; i++){
                if(s.count(src)){
                    flg = 1;
                    break;
                }
            }
            if(flg==1)cnt++;

            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",cc++,z-cnt, src,ttl);



        }

        for(i=0; i<=100000; i++)a[i].clear();

        s.clear();


    }
    return 0;
}
