//-_-
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
vector<int>a;

int vis[21][1004], sz, n;

int f(int pos, int sum)
{
    if(pos>=sz){
        if(sum==0){
            return 1;
        }
        else return 0;
    }

    if(sum==0){
        return 1;
    }
    if(sum<0)return 0;

    if(vis[pos][sum]!=-1)return vis[pos][sum];

    int xx=0, yy=0;

    xx = f(pos+1, sum-a[pos]);
    yy = f(pos+1, sum);

    vis[pos][sum] = xx+yy;

    return vis[pos][sum];

}


int main()
{
    int t, n, p, i, j, k;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        scanf("%d", &p);
        for(i=1; i<=p; i++){
            scanf("%d", &k);
            if(k<=n)a.pb(k);
        }

        mem(vis, -1);
        sz = a.size();

        j=f(0, n);
        if(j>0)printf("YES\n");
        else printf("NO\n");
        a.clear();
    }
    return 0;
}
