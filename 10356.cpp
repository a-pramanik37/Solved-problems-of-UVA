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

vector<pii>a[505];
priority_queue<pii, vector<pii>, greater<pii> >q;
int cst[505];

int main()

{
        int n, m, i, j, x, y, c;
        while(scanf("%d%d", &n, &m)==2){

            for(i=1; i<=m; i++){
                scanf("%d%d%d", &x, &y, &c);
                a[x].pb(pii(y, c));
                a[y].pb(pii(x, c));
            }

            for(i=0; i<n; i++)cst[i]=inf;

            cst[0]=0;
            q.push(pii(0, 0));


            while(!q.empty()){

                x = q.top().second;
                int c = q.top().first;
                q.pop();

                //if(c>cst[x])continue;

                for(i = 0; i<a[x].size(); i++){

                    y = a[x][i].first;
                    int cc = a[x][i].second;

                    if(cst[y]>(cst[x]+cc)){

                        cst[y] = cst[x]+cc;
                        q.push(pii(cst[y], y));

                    }

                }


            }
            if(cst[n-1]==inf)printf("?\n");
            else printf("%d\n", cst[n-1]);

            for(i=0; i<n; i++)a[i].clear();

        }
        return 0;
}
