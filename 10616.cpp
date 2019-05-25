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
int a[203][23][12];
int val[203], n, m, d;

int md(int num, int mod)
{
    if(num>=0)return num%mod;

    int p = ((-1)*num)%mod;
    return mod-p;

}

int dp(int pos, int sum, int rem)
{
    if(rem==m){
        if((sum%d)==0)return 1;
        else return 0;
    }

    if(pos>n){
        if((sum%d)==0 && rem==m)return 1;
        else return 0;
    }

    if(a[pos][sum][rem]!=-1)return a[pos][sum][rem];

    int xx=0, yy=0;

    xx = dp(pos+1, md((md(sum, d)+md(val[pos], d)),d), rem+1);

    yy = dp(pos+1, sum,  rem);

    a[pos][sum][rem]=xx+yy;
    return a[pos][sum][rem];

}

int main()
{
    int i, j, k, q;
    int cc=0;
    while(scanf("%d%d", &n, &q)==2){

            if(n==0 && q==0)break;

        for(i=1; i<=n; i++)scanf("%d", &val[i]);

        printf("SET %d:\n", ++cc);

        for(i=1; i<=q; i++){
            scanf("%d%d", &d, &m);
            mem(a, -1);
            k=dp(1, 0, 0);
            printf("QUERY %d: %d\n", i, k);
        }

    }
    return 0;
}
