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
    vector<int>a[30005];
    queue<int>q;
    int vis[30005];
    int n, m , i, j, k, p, x, y, c, d,t,max, src, cnt, flg;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &m);
        for(i = 1; i<=m; i++){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
            a[y].pb(x);
        }
        src = 1;
        memset(vis, -1, sizeof vis);
       max = 0;

        while(1){

                vis[src]=0;
            q.push(src);
        cnt = 1;

            while(!q.empty()){
                x = q.front();
                q.pop();

                for(i=0; i<a[x].size(); i++){
                    y = a[x][i];

                    if(vis[y]==-1){
                        vis[y]=vis[x]+1;
                        q.push(y);
                        cnt++;
                    }

                }
            }
            if(cnt>=max)max = cnt;
            flg=0;

            for(i=1; i<=n; i++){
                if(vis[i]<0){
                    src = i;
                    flg=1;

                    break;
                }
            }
            if(flg==0)break;

        }


        printf("%d\n",max);

        for(i=1; i<=n; i++)a[i].clear();
        }

    return 0;
}

