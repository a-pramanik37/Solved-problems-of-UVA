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
#define inf 2000000000.0
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)

typedef pair<int, double>pii;
vector<pii>a[209];
double cst[209];
priority_queue<pii, vector<pii> ,greater<pii> >q;

double dis(double x1, double y1, double x2, double y2){

        return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));

}

int main()

{
        int n, i, j, k, m;
        double x ,y;
        vector<pii>v;
        //printf("%lf\n", dis(0.0, 0.0, 3.0, 4.0));
        while(scanf("%d", &n)==1 && n!=0){
            m = 0;
            for(i=0; i<n; i++){
                scanf("%lf%lf", &x, &y);
                v.pb(pii(x, y));
                for(j=0; j<v.size()-1; j++){
                        double dd = dis(x, y, v[j].first, v[j].second);
                    a[i].pb(pii(j, dd));
                    a[j].pb(pii(i, dd));
                }
            }

            for(i=0; i<n; i++)cst[i]=inf;

            q.push(pii(0, 0));
            cst[0]=0;

            while(!q.empty()){

                int z =q.top().first;
                q.pop();

                for(i=0; i<a[z].size(); i++){
                    int p = a[z][i].first;
                    double c = a[z][i].second;

                    if(cst[p]>(c+cst[z])){
                        cst[p] = c+cst[z];
                        q.push(pii(p, cst[p]));
                    }

                }

            }

            printf("%lf\n", cst[1]);
            v.clear();
            for(i=0; i<n; i++)a[i].clear();


        }
        return 0;
}
