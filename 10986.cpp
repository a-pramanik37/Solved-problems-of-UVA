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
typedef pair<int, int>pii;

vector<pii>a[20009];
int cst[20009];

priority_queue<pii, vector<pii>, greater<pii> >q;

int main()

{
        int st, en, i, j, k, n, m, t,x, y, c;

        scanf("%d", &t);

        int cc = 0;

        while(t--){

            scanf("%d%d%d%d", &n, &m, &st, &en);

            for(i=1; i<=m; i++){
                scanf("%d%d%d", &x, &y, &c);
                a[x].pb(pii(y, c));
                a[y].pb(pii(x, c));
            }

            for(i=0; i<n; i++)cst[i]=inf;

            q.push(pii(0, st));
            cst[st]=0;
            int flg = 0;
            while(!q.empty()){

                x = q.top().second;
                q.pop();

                for(i=0; i<a[x].size(); i++){
                    y = a[x][i].first;
                    int cc = a[x][i].second;

                    if(cst[y]>(cc+cst[x])){
                        cst[y]=cc+cst[x];
                        if(y==en){
                            flg=1;
                        }
                        q.push(pii(cst[y], y));
                    }

                }

            }

            printf("Case #%d: ",++cc);
            if(flg==0)printf("unreachable\n");
            else printf("%d\n",cst[en]);

            for(i=0; i<n; i++)a[i].clear();


        }
        return 0;
}
