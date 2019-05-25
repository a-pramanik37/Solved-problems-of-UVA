#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
typedef pair<int, int>pii;

vector<pii>a[105];
priority_queue<pii, vector<pii>, greater<pii> >q;
int vis[105];

int main()

{
        int t, n, tym, e, m, i, j, x, y, c;
        scanf("%d", &t);
        int flg = 0;
        while(t--){
            scanf("%d%d%d%d", &n, &e, &tym, &m);
            for(i=1; i<=m; i++){
                scanf("%d%d%d", &x, &y, &c);
                a[x].pb(pii(y, c));
            }
            int cnt=1;
            for(i=1; i<=n; i++){
                if(i==e)continue;

                for(j=1; j<=n; j++)vis[j]=inf;
                q.push(pii(0, i));
                vis[i]=0;

                while(!q.empty()){
                    x = q.top().second;
                    q.pop();
                    for(j=0; j<a[x].size(); j++){
                        y = a[x][j].first;
                        int cst = a[x][j].second;
                        if(vis[y]>vis[x]+cst){
                            vis[y]=vis[x]+cst;
                            q.push(pii(vis[y], y));
                        }
                    }
                }
                if(vis[e]<=tym)cnt++;
            }
            if(flg==1)printf("\n");
            printf("%d\n", cnt);
            for(i=1; i<=n; i++)a[i].clear();
            flg=1;
        }
  return 0;
}
