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
    int t, p, d, i, j, k, x, y,n, m, low, cc=1;

    vector<int>a[1005];
    queue<int>q;

    int gio[1005], vis[1004];

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &p, &d);

        for(i=1; i<=d; i++){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
            a[y].pb(x);
        }

       mem(vis, -1);
       vis[0]=0;
       q.push(0);

       while(!q.empty()){

        x = q.front();
        q.pop();

        for(i=0;i<a[x].size(); i++){
            y = a[x][i];
            if(vis[y]==-1){
                vis[y]=vis[x]+1;
                q.push(y);
            }
        }

       }
       if(cc!=1)printf("\n");
        for(i=0;i<p;i++){
            if(i!=0)printf("%d\n",vis[i]);

            a[i].clear();
        }

        cc++;
    }
    return 0;
}
