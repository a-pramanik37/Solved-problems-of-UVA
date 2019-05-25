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

struct data
{
    int x, y, cst;
}a[50009];

int par[2009];
map<string, int>mp;
string s, g;

bool cmp(data lhs, data rhs)
{
    return lhs.cst<rhs.cst;
}

int find(int u){
    if(par[u]==u)return u;
    int s = find(par[u]);
    par[u]=s;
    return s;
}

int main()

{
        int t, n, m, i, j, k, c;

        scanf("%d\n", &t);

        for(int f = 1; f<=t; f++){
            scanf("%d", &n);
            scanf("%d ", &m);
            int eg=0;
            for(i =1; i<=m; i++){
                cin>>s>>g>>c;
                if(mp.find(s)==mp.end()){
                    mp[s]=++eg;
                }
                if(mp.find(g)==mp.end()){
                    mp[g]=++eg;
                }
                int p = mp[s];
                int q = mp[g];
                a[i].x=p;
                a[i].y=q;
                a[i].cst=c;

            }
            for(i=1; i<=n; i++)par[i]=i;

            sort(a+1, a+m+1, cmp);
            int cost = 0, cnt=0;

            for(i=1; i<=m; i++){
                int x1 = find(a[i].x);
                int y1 = find(a[i].y);
                if(x1!=y1){
                    par[x1]=y1;
                    cost+=a[i].cst;
                    cnt++;
                }
                if(cnt==n-1)break;
            }
            if(f!=1)printf("\n");
            printf("%d\n", cost);
                mp.clear();
        }

        return 0;
}
