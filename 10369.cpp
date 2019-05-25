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
typedef pair<double, double>pdd;

double dis(double a, double b, double x, double y)
{
    return sqrt((a-x)*(a-x)+(b-y)*(b-y));
}

struct dt
{
    double x, y, cst;

}a[250000];

vector<pdd>v;
int par[505];
bool cmp(dt lhs, dt rhs)
{
    return lhs.cst<rhs.cst;
}

int finP(int u)
{
    if(par[u]==u)return u;
    int s = finP(par[u]);
    par[u]=s;
    return s;
}

int main()
{
    int t, s, p, n, m, i, ed, j;
    double x, y;
    scanf("%d", &t);

    while(t--){

        scanf("%d%d", &s, &p);
        ed=0;
        for(i=1; i<=p; i++){
            scanf("%lf%lf", &x, &y);

            v.pb(pdd(x, y));

            for(j=0; j<v.size()-1; j++){
                a[++ed].x=j;
                a[ed].y = v.size()-1;
                a[ed].cst = dis(x, y, v[j].first, v[j].second);
                //cout<<fixed;
                //cout<<setprecision(2)<<a[ed].cst<<" ";
            }
            //cout<<endl;
        }
            double mx = 0;

            int cnt = 0, k=p-1-(s/2);
            for(i=0; i<=p; i++)par[i]=i;
            sort(a+1, a+1+ed, cmp);

            for(i=1; i<=ed; i++){
                if(cnt>=k)break;
                int xx = finP(a[i].x);
                int yy = finP(a[i].y);
                double cc = a[i].cst;

                if(xx!=yy){
                    par[xx]=yy;
                    mx=max(mx, cc);
                    cnt++;
                }

            }
            cout<<fixed;
            cout<<setprecision(2)<<mx<<endl;

        v.clear();
    }
    return 0;
}
