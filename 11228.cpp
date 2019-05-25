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
typedef pair<int, int>pii;
struct dt
{
    int x, y;
    double cst;
}a[cf];
vector<pii>v;
int vis[cf], par[cf];

double dis(double a, double b, double x, double y)
{
    return sqrt((a-x)*(a-x)+(b-y)*(b-y));
}

bool cmp(dt lhs, dt rhs)
{
    return lhs.cst<rhs.cst;
}

int f(int u)
{
    if(par[u]==u)return u;
    int s = f(par[u]);
    par[u]=s;
    return s;
}

int main()
{
    int n, i ,j, k, t, m;
    double x, y, r;
    scanf("%d", &t);
    int cc=0;
    while(t--){

        scanf("%d%lf", &n, &r);
        m=0;
        for(i=1; i<=n; i++){
            scanf("%lf%lf", &x, &y);
            v.pb(pii(x, y));
            for(j=0; j<v.size()-1; j++){
                a[++m].x=j+1;
                a[m].y=i;
                a[m].cst=dis(x, y, v[j].first, v[j].second);
            }
        }
        /*for(i=1; i<=m; i++){
    printf("%d %d %d\n", a[i].x, a[i].y, a[i].cst);
}*/
        mem(vis, 0);
        for(i=1; i<=m; i++)par[i]=i;
        sort(a+1, a+m, cmp);

        double rd=0, rl=0;
        int st=0,st2=0;
        for(i=1; i<=m; i++){

            int p1 = f(a[i].x);
            int p2 = f(a[i].y);
            if(p1!=p2 && a[i].cst<=r){
                    vis[a[i].x]++;
            vis[a[i].y]++;
                    st=1;
                par[p1]=p2;
               rd+=a[i].cst;
            }
            else if(p1!=p2 && a[i].cst>r){

                if(vis[a[i].x]==0){
                    st2++;
                    vis[a[i].x]++;
                }
                if(vis[a[i].y]==0){
                    st2++;
                    vis[a[i].y]++;
                }

                par[p1]=p2;
                rl+=a[i].cst;
            }
        }

        printf("%d %d %d\n", st+st2, int(rd), int(rl));
        v.clear();

    }
    return 0;
}
