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
int a[72][72], sub[72], n;

int dp(int pos, int feas)
{
    if(feas==0)return 1;
    if(pos>n)return 0;
    if(a[pos][feas]!=-1)return a[pos][feas];

    int xx = 0, yy=0;

    if(sub[pos]<=feas)xx = dp(pos, feas-1);
    yy = dp(pos+1, feas);

    a[pos][feas]=xx+yy;
    return a[pos][feas];

}

int main()
{
    int t, tot, pass, i, j;

    scanf("%d", &t);

    while(t--){

        scanf("%d%d%d", &n, &tot, &pass);
        mem(a, -1);
        for(i=1; i<=n; i++)sub[i]=1;
        printf("%d\n", dp(1, tot-(pass*n)));

    }
    return 0;
}

