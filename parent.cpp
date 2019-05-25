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

int par[1000];

int find(int u){

    if(par[u]==u)return u;

    int x = find(par[u]);
    par[u] = x;
    return x;
}

int main()

{
        int n, m, i, j, k, x, y, q;

        while(scanf("%d%d", &n, &m)==2){

            for(i=1; i<=n; i++)par[i]=i;

            for(i=1; i<=m; i++){
                scanf("%d%d", &x, &y);
                int x1 = find(x);
                int y1 = find(y);
                if(x1!=y1){
                    par[x1]=y1;
                }
            }

            scanf("%d", &q);

            for(i=1; i<=q; i++){
                scanf("%d%d", &x, &y);
                int a = find(x);
                int b = find(y);
                if(a==b)printf("Ek e graph e\n");
                else printf("Alada graph e\n");

            }

        }
        return 0;
}
