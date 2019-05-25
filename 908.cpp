#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
int par[1000005];

struct data
{
    int x, y, cst;
}a[1000005];
struct dt
{
    int xx, yy, cc;
}b[15];

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

int main()

{
        int n, i, j, k, x, y, c, m;
        int cs = 0;
        while(scanf("%d", &n)==1){

            for(i=1; i<n; i++){
                scanf("%d%d%d", &x, &y, &c);
            }

            scanf("%d", &k);
            for(i=1; i<=k; i++){
                scanf("%d%d%d", &b[i].xx, &b[i].yy, &b[i].cc);
            }

            scanf("%d", &m);

            for(i=1; i<=m; i++)scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].cst);

            for(i=1; i<=m; i++)par[i]=i;

            sort(a+1, a+1+m, cmp);

            int cost1 = 0;

            for(i=1; i<=m; i++){
                int x1 = find(a[i].x);
                int y1 = find(a[i].y);

                if(x1!=y1){
                        par[x1]=y1;
                    cost1+=a[i].cst;
                }
            }
            j = m+1;
            for(i=1; i<=k; i++){
                a[j].x = b[i].xx;
                a[j].y = b[i].yy;
                a[j].cst = b[i].cc;
                j++;
            }

            for(i=1; i<=m+k; i++)par[i]=i;

            sort(a+1, a+m+k+1, cmp);

            int cost2=0;

            for(i=1; i<=m+k; i++){
               int x1 = find(a[i].x);
               int y1 = find(a[i].y);
                if(x1!=y1){
                    par[x1]=y1;
                    cost2+=a[i].cst;
                }
            }
            if(cs!=0)printf("\n");
            cs++;
            printf("%d\n%d\n", cost1, cost2);
        }
        return 0;
}
