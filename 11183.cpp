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
int n;
struct dt
{
    int x, y, cst;
}a[40004];
struct dt2
{
    int x, y, cst;
}b[40004];

int par[1004];
int f(int u){

    if(par[u]==u)return u;
    int s = f(par[u]);
    par[u]=s;
    return s;
}

bool cmp(dt lhs, dt rhs)
{
    return lhs.cst<rhs.cst;
}

int main()
{
    int t, i, j, k, m, ans, sz, mn, cnt;
    scanf("%d", &t);
    int cc = 0;
    while(t--){
        scanf("%d%d", &n, &m);
        sz=0;
        for(i=1; i<=m; i++){
            scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].cst);
            if(a[i].x==0){
                b[++sz].x=0;
                b[sz].y=a[i].y;
                b[sz].cst=a[i].cst;
            }
        }



        mn=inf;

        sort(a+1, a+1+m, cmp);

        for(j=1; j<=sz; j++){
            for(i=0; i<=n; i++)par[i]=i;
                ans=0;
        ans+=b[j].cst;
        k = b[j].y;
        par[k]=0;
        cnt=1;
        for(i=1; i<=m; i++){
                //if(cnt>=(n-1))break;
                if(a[i].x!=0 && a[i].y!=k){
            int p = f(a[i].x);
            int q = f(a[i].y);
            int c = a[i].cst;
            if(p!=q){
                par[p]=q;
                ans+=c;
                cnt++;
            }
        }
        }
        if(cnt>=(n-1)){
            mn = min(mn, ans);
        }

        }

        printf("Case #%d:",++cc);
        if(mn==inf)printf(" Possums!\n");
        else printf(" %d\n", mn);

    }
    return 0;
}
