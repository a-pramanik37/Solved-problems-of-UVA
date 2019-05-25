#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define inf 2000000000
#define V(a) vector<ll>a
#define pb push_back
typedef pair<int, int>pii;
vector<pii>ar[302];
vector<int>v;
priority_queue<pii, vector<pii> , greater<pii> >q;
int vis[305], par[305];
char a[304][200];
int main()

{


    int i, n, m, j, x, y, src, des;

    while(scanf("%d ", &n)==1){


        for(i=1; i<=n; i++){
            scanf("%s", a[i]);
        }

        for(i=1; i<=n; i++){
                x = 0;
            for(j = 2; j<=strlen(a[i]); j++){
                if(a[i][j]>=48 && a[i][j]<=57){
                    x = x*10+a[i][j]-48;
                }

                else{

                    ar[i].pb(pii(x, 1));
                    x = 0;
                }
            }
        }


       scanf("%d", &m);
       cout<<"-----"<<endl;
       while(m--){
        scanf("%d%d", &src, &des);

        for(i=1; i<=n; i++)vis[i]=inf;
        mem(par, 0);
        vis[src]=0;
        par[src]=src;
        q.push(pii(src, 0));
        int flg=0;
        while(!q.empty()){

            x = q.top().first;
            q.pop();
            for(i=0; i<ar[x].size(); i++){
                y = ar[x][i].first;

                if(vis[x]+1<vis[y]){
                    vis[y]=vis[x]+1;
                    par[y]=x;
                    if(y==des){
                        flg=1;
                    }
                    q.push(pii(y, vis[y]));
                }
            }
            if(flg==1)break;
        }
        while(!q.empty())q.pop();
        if(vis[des]==inf)cout<<"connection impossible"<<endl;
        else{
            i=des;
            while(1){
                v.pb(i);
                if(par[i]==i)break;
                i=par[i];
            }
            cout<<v[v.size()-1];
            for(i=v.size()-2; i>=0; i--)printf(" %d",v[i]);
            printf("\n");
        }
        v.clear();

       }
       for(i=1; i<=n; i++)ar[i].clear();
    }
    return 0;
}
