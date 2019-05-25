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

struct dt
{
    int x, y, cst;
}a[19909];
int par[205];
map<string, int>mp;
string s, t;

int find(int u)
{
    if(par[u]==u)return u;

    int s = find(par[u]);
    par[u]=s;
    return s;

}

bool cmp(dt lhs, dt rhs)
{
    return lhs.cst<rhs.cst;
}

int main()

{
        int n, m, i, j, k, p, q, c, src, des;
        int cc = 0;
        while(scanf("%d%d", &n, &m)==2){
            int cnt=0;
            for(i=1; i<=m; i++){
                cin>>s>>t>>c;
                if(mp.find(s)==mp.end()){
                    mp[s]=++cnt;
                }
                if(mp.find(t)==mp.end()){
                    mp[t]=++cnt;
                }

                p = mp[s];
                q = mp[t];
                a[i].x=p;
                a[i].y=q;
                a[i].cst=c;
                //printf("%d %d %d\n", p, q, c);
            }
            cin>>s>>t;
            src=mp[s];
            des=mp[t];
            sort(a+1, a+1+m, cmp);

            for(i=1; i<=n; i++)par[i]=i;

            int mn = inf;

            for(i=1; i<=m; i++){
                int x1 = find(a[i].x);
                int y1 = find(a[i].y);
                int cost = a[i].cst;

                if(x1!=y1){
                        //printf("%d\n", cost);
                    par[x1]=y1;
                    mn=min(mn, cost);
                }
                if(find(src)==find(des))break;

            }
            printf("Scenario #%d\n",++cc);
            printf("%d tons\n\n", mn);
            mp.clear();

        }
        return 0;
}
