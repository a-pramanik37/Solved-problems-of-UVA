//-_-
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

int main()
{
     int n,e,p;
    while(scanf("%d", &n))
    {

        if(n==0)
        break;
        cin>>e;
        vector<int>ed[100000];
        int color[10000];
        mem(color, -1);

        for(int i=0;i<e;i++)
        {
            int x,y;
            cin>>x>>y;
            ed[x].pb(y);
            ed[y].pb(x);
        }

        queue<int>work;
        int f=0;
        color[0]=0;
        work.push(0);

        while(!work.empty())
        {
            p=work.front();
            work.pop();
            int vsize=ed[p].size();
            for(int i=0;i<vsize;i++)
            {
                if(color[ed[p][i]]==-1)
                {
                    if(color[p]==0)
                     color[ed[p][i]]=1;
                    else
                    color[ed[p][i]]=0;
                     work.push(ed[p][i]);
                }
                else
                {
                    if(color[ed[p][i]]==color[p]){
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        printf("NOT BICOLORABLE.\n");
        else
        printf("BICOLORABLE.\n");
    }

    return 0;
}

/*//-_-
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
int vis[210];
vector<int>a[210];
queue<int>q;
int main()
{
    int n, i ,j ,x, y, m;
    while(scanf("%d", &n)==1){

        if(n==0)break;
        scanf("%d", &m);
        for(i=1; i<=m; i++){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
            a[y].pb(x);
        }

        mem(vis, -1);
        vis[0]=0;
        q.push(0);
        int flg=0;
        while(!q.empty()){

            x = q.front();
            q.pop();

            for(i=0; i<a[x].size(); i++){
                y = a[x][i];

                if(vis[y]==-1){

                    if(vis[x]==0){
                        vis[y]=1;
                    }
                    else vis[y]=0;
                     q.push(y);
                }

                else{
                    if(vis[x]==vis[y]){
                        flg=1;
                        break;
                    }
                }

            }
            if(flg==1)break;
        }

        if(flg==1)printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");

        for(i=0; i<n; i++)a[i].clear();
    }
    return 0;
}
*/

