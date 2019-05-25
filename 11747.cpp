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

int par[1009];


struct data
{
    int x, y, cst;
}a[25009];

bool cmp(data lhs, data rhs){

    return lhs.cst<rhs.cst;

}

int fin(int u){

        if(par[u]==u)return u;

        int s = fin(par[u]);
        par[u]=s;
        return s;
}

int main()

{
        int n, m, i, j;
        vector<int>ans;
        while(scanf("%d%d", &n, &m)==2 && n!=0 && m!=0){

        for(i=1; i<=m; i++){
            scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].cst);
        }

        for(i=0; i<=n; i++)par[i]=i;

        sort(a+1, a+m+1, cmp);


        int cnt = 0;
        for(i=1; i<=m; i++){

            int n1 = a[i].x;
            int n2 = a[i].y;
            int ccst = a[i].cst;

            int f1 = fin(n1);
            int f2 = fin(n2);

            if(f1!=f2){
                par[f1]=f2;
            }
            else{
                ans.pb(ccst);
            }
        }
        if(ans.empty())printf("forest\n");
        else{
                //vsort(ans);
            for(i=0; i<ans.size(); i++){
                if(i==0)printf("%d", ans[i]);
                else printf(" %d",ans[i]);
            }
            printf("\n");
            ans.clear();
        }

}

        return 0;
}
