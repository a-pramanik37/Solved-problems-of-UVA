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

int par[30009], ar[30009];
int n, m, t, i, j, k, x, y;

int find(int u){
    if(par[u]==u)return u;
    int s = find(par[u]);
    par[u]=s;
    return s;
}

int main()

{
        scanf("%d", &t);

        while(t--){
            scanf("%d%d", &n, &m);
            for(i=1; i<=n; i++)par[i]=i;
            for(i=1; i<=m; i++){
                scanf("%d%d", &j, &k);
                x = find(j);
                y = find(k);
                if(x!=y){
                    par[x]=y;
                }
            }

            mem(ar, 0);
            int mx=0;
            for(i=1; i<=n; i++){
                k =find(i);
                ar[k]++;
                mx = max(ar[k], mx);
            }
            printf("%d\n", mx);
        }
        return 0;
}
