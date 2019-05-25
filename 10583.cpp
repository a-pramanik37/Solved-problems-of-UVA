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

int par[50009], yarra[50009];
int n, m, i, j, k, x, y;
int find(int u){
        if(par[u]==u)return u;
        int s = find(par[u]);
        par[u]=s;
        return s;
}
int main()

{
        int cc = 0;

        while(scanf("%d%d", &n, &m)==2 && n!=0 && m!=0){
            for(i=1; i<=n; i++)par[i]=i;
            for(i=1; i<=m; i++){
                scanf("%d%d", &j, &k);
                x = find(j);
                y = find(k);
                if(x!=y)par[x]=y;
            }
            mem(yarra, 0);
            int cnt = 0;
            for(i=1; i<=n; i++){
                k = find(i);
                if(yarra[k]==0){
                    yarra[k]++;
                    cnt++;
                }
            }
            printf("Case %d: %d\n", ++cc, cnt);
        }
        return 0;
}

