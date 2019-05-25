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

map<int, int>mp;
vector<int>a[100000];
int main()

{
        int n, m, i, j, x, y, occr;
        while(scanf("%d%d", &n, &m)==2){
            int num=0;
            for(i=1; i<=n; i++){
                scanf("%d", &x);
                if(mp.count(x)==0){
                    mp[x]=++num;
                }
                a[mp[x]].pb(i);
            }

            for(i=1; i<=m; i++){
                scanf("%d%d", &occr, &x);
                y = mp[x];
                if(a[y].size()<occr)printf("0\n");
                else printf("%d\n", a[y][occr-1]);
            }

            for(i=0; i<=n; i++)a[i].clear();
            mp.clear();

        }
        return 0;
}
