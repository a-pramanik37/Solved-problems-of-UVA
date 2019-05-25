#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
int t,n ,m, i, j,p,q, mn;
int par[105];
int b[205];
struct data
{
    int x, y, cst;

}a[205];

bool cmp(data lhs, data rhs)
{
    return lhs.cst<rhs.cst;
}

int find(int u)
{
    if(par[u]==u)return u;
    return par[u]=find(par[u]);
}

void mst(int xx)
{
    int cnt = 0, cost1=0;

    for(int f=1; f<=n; f++)par[f]=f;

    for(int f=1; f<=m; f++){
        int x1 = find(a[f].x);
        int y1 = find(a[f].y);

        if(x1!=y1 && f!=xx){
            par[x1]=y1;
            cost1+=a[f].cst;
            cnt++;
        }
    }

    if(cnt==(n-1))mn = min(mn, cost1);

}


int main()

{
        scanf("%d", &t);
        int cc = 0;

        while(t--){
            scanf("%d%d", &n,&m);

            for(i=1; i<=m; i++)scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].cst);

            for(i=1; i<=n; i++)par[i]=i;

            sort(a+1, a+1+m, cmp);
            mem(b,0);
            int cost=0;
            int cnt=0;
            for(i=1; i<=m; i++){
                int x1 = find(a[i].x);
                int y1 =find(a[i].y);
                if(x1!=y1){
                    par[x1]=y1;
                    cnt++;
                    cost+=a[i].cst;
                    b[i]=1;
                }
            }

            printf("Case #%d : ",++cc);

            if(cnt<(n-1))printf("No way\n");

            else{
                mn = inf;

                for(i=1; i<=m; i++){
                    if(b[i]==1){
                        mst(i);
                    }
                }
                if(mn==inf)printf("No second way\n");
                else printf("%d\n", mn);
            }

        }
        return 0;
}

