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
#define inf 20000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)

typedef pair<int, int>pii;

vector<pii>a[100];
priority_queue<pii, vector<pii>, greater<pii> >q;
int n, m, x, y, i , j, k, st, p, t, des;
int cst[100];
int par[100];

/*void path_print(int u)
{
    if(par[u]==u){
        //printf("%d ", u);
        return ;
    }
    else{
       path_print(par[u]);
        printf("%d ", s);
    }
}*/

int main()

{


        while(scanf("%d%d", &n, &m)==2){

            for(i=1; i<=m; i++){
                scanf("%d%d%d", &x, &y, &p);

                a[x].pb(pii(y, p));
                a[y].pb(pii(x, p));

            }

            scanf("%d%d", &st, &des);
            par[st]=st;

            for(i=1; i<=n; i++)cst[i]=inf;


            cst[st]=0;
            q.push(pii(0, st));


            while(!q.empty()){

                x = q.top().second;
                int c = q.top().first;
                q.pop();

                //if(c>cst[x])continue;

                for(i = 0; i<a[x].size(); i++){

                    y = a[x][i].first;
                    int cc = a[x][i].second;

                    if(cst[y]>(cst[x]+cc)){
                            par[y] = x;
                        cst[y] = cst[x]+cc;
                        q.push(pii(cst[y], y));

                    }

                }


            }
            //for(i=1; i<=n; i++)printf("%d ",par[i]);
            int c = des;
            while(1){
                     if(par[c]==c)break;
                printf("%d ", par[c]);
                c = par[c];
            }
            printf("\n");

        }
        return 0;
}

