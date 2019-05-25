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
typedef pair<double, double>pii;
vector<pii>v;

struct data{
double cst;
int x, y;

}a[10000];

double dis(double x1, double y1, double x2, double y2){

        return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));

}

int par[1000];

int find(int u)
{
    if(par[u]==u)return u;

    int s=find(par[u]);
    par[u]=s;
    return s;
}


bool cmp(data lhs, data rhs){

        return lhs.cst<rhs.cst;

}

int main()

{
        int t, n, i, j, k;
        double p, q;

        scanf("%d", &t);

        for(int f=1; f<=t; f++){

            scanf("%d", &n);
            int edge=0;
            for(i=1; i<=n; i++){
                scanf("%lf%lf", &p, &q);
                v.pb(pii(p, q));

                for(j=0; j<v.size()-1; j++){

                        a[++edge].x=j;
                        a[edge].y = v.size()-1;
                        a[edge].cst=dis(p, q, v[j].first, v[j].second);

                }

            }



            for(i=0; i<=n; i++)par[i]=i;

            sort(a+1, a+edge+1, cmp);

             /*for(i=1; i<=edge; i++){
                printf("%d%d%.2lf\n", a[i].x, a[i].y, a[i].cst);
            }*/

            double cost = 0;

            for(i=1; i<=edge; i++){

                int p1 = a[i].x;
                int p2 = a[i].y;
                double pc = a[i].cst;

                int t1 = find(p1);
                int t2 = find(p2);

                if(t1!=t2){
                    par[t1]=t2;
                    cost+=pc;
                }

            }
            if(f!=1)printf("\n");
            printf("%.2lf\n", cost);

            v.clear();

        }

        return 0;
}
