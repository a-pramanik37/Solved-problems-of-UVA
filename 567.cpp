#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back

vector<int>a[22];
int main()

{
    int i, j, k, p,  x, y, vis[25],z,n,m,src,des,cc=1;

    queue<int>q;

    while(scanf("%d", &k)==1){

        for(i=1; i<=k; i++){
                scanf("%d",&p);

            a[1].pb(p);
            a[p].pb(1);

        }

        for(i=2;i<20;i++){
            scanf("%d",&k);
            for(j=1;j<=k;j++){
                scanf("%d",&p);

                a[i].pb(p);
                a[p].pb(i);
            }
        }

        printf("Test Set #%d\n",cc++);

        scanf("%d", &z);
        for(i=1; i<=z; i++){
            scanf("%d%d", &src, &des);
            mem(vis,-1);
            vis[src]=0;

            q.push(src);

            while(!q.empty()){

                x = q.front();
                q.pop();

                for(j=0;j<a[x].size(); j++){
                    y = a[x][j];

                    if(vis[y]==-1){
                        vis[y]=vis[x]+1;
                        q.push(y);
                    }
                }


            }
            printf("%2d to %2d: %d\n",src,des,vis[des]);

        }
        P("\n");
        for(i=0; i<=20; i++){
            a[i].clear();
        }


    }
    return 0;
}
