///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define sc(n) scanf("%d", &n)
#define Aktaruzzaman using
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
Aktaruzzaman Pramanik

int vis[22][5002], sz, n, a[30];
vector<int>v;

int pd(int pos, int sum){

    if(pos>sz)return sum;

    if(vis[pos][sum]!=-1)return vis[pos][sum];

    int xx = inf, yy = inf;

    if(sum-a[pos]>=0)xx = pd(pos+1, sum-a[pos]);
    yy = pd(pos+1, sum);

    vis[pos][sum] = min(xx, yy);

    return vis[pos][sum];

}

void seq(int pos, int sum)
{
    if(pos>sz){
            //v.pb(a[pos]);
            return;
    }

    int xx, yy;

    if(vis[pos+1][sum]>=vis[pos+1][sum-a[pos]] && sum-a[pos]>=0){
        v.pb(a[pos]);
        seq(pos+1, sum-a[pos]);
    }

    else{
        seq(pos+1, sum);
    }
}

int main()
{
    int i, j, k, x, y;

    while(scanf("%d%d", &n, &sz)==2){

        for(i=1; i<=sz; i++)scanf("%d", &a[i]);

        mem(vis, -1);

        x = n-pd(1, n);
       seq(1, n);

       for(i=0; i<v.size(); i++){
        printf("%d ",v[i]);
       }
       printf("sum:%d\n", x);
    v.clear();
    }
return 0;
}
