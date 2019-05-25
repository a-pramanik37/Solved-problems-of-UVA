#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)

int par[109];
 int cc[1000005], mn, t, n,m, i, j, k, p, q;

struct data
{
    int x, y, cst;
}a[1000005];

bool cmp(data lhs, data rhs)
{
    return lhs.cst<rhs.cst;
}

int find(int u)
{
    if(par[u]==u)return u;

    int s = find(par[u]);
    par[u]=s;
    return s;
}

void mst(int xx)
{
    int cnt = 0, cost2 = 0;

    for(int f=1; f<=n; f++)par[f]=f;

    for(int f=1; f<=m; f++){
        int x1 = find(a[f].x);
        int y1 = find(a[f].y);

        if(x1!=y1 && f!=xx){
            cnt++;
            par[x1]=y1;
            cost2+=a[f].cst;
        }

    }
    if(cnt==(n-1))mn = min(mn, cost2);
}


int main()

{


        scanf("%d", &t);

        while(t--){

            scanf("%d%d", &n, &m);

            for(i=1; i<=m; i++){
                scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].cst);
            }

            for(i=1; i<=n; i++)par[i]=i;

            int cnt=0;

            sort(a+1, a+1+m, cmp);

            mem(cc, 0);
            int cost = 0;

            for(i=1; i<=m; i++){
                int x1 = find(a[i].x);
                int y1 = find(a[i].y);

                if(x1!=y1){
                    par[x1]=y1;
                    cost+=a[i].cst;
                    cc[i]=1;
                }
            }
            mn = inf;
            for(i=1; i<=m; i++){
                if(cc[i]==1){
                    mst(i);
                }
            }

            printf("%d %d\n", cost, mn);

        }
        return  0;
}
