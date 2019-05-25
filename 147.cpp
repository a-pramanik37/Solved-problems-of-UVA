///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define infLL 9000000000000000000
#define infULL 18446744073709551615
#define Aktaruzzaman using
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
#define MOD 1000000007
#define pii pair<int, int>
#define eps 0.0000001
//int dx[]={0,1,0,-1};
//int dy[]={1,0,-1,0};
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};

template <class T> inline T gcd(T a,T b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
template< class T > inline T lcm(T a,T b)
{
    a=abs(a);
    b=abs(b);
    return (a/gcd(a,b))*b;
}
template <class T> inline T is_prime(T a)
{
    if(a<2|a==4)return false;
    if(a==2||a==3||a==5)return true;
    T g=(T)sqrt(a)+1;
    for(T i=2; i<=g; i++)
    {
        if(a%i==0)return false;
    }
    return false;
}
template <class T> inline T bigmod(T n,T p,T m)
{
    if(p==0)return 1;
    if(p%2)return ((n%m)*bigmod(n,p-1,m))%m;
    else
    {
        T c=bigmod(n,p/2,m);
        return ((c%m)*(c%m))%m;
    }
}

Aktaruzzaman Pramanik

ll vis[12][30002];

ll a[]={5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};

ll dp(ll pos, ll sum)
{
    if(sum==0)return 1;

    if(pos>10)return 0;

    if(vis[pos][sum]!=-1)return vis[pos][sum];

    ll xx=0, yy=0;

    if(sum-a[pos]>=0)xx+=dp(pos, sum-a[pos]);
    yy += dp(pos+1, sum);

    return vis[pos][sum]= xx+yy;
}

int main()

{
    /*ios_base:: sync_with_stdio(0);
      cin.tie(NULL);
      cout.tie(NULL);*/

    double n;

    ll i, j, k, x, y;

    while(scanf("%lf", &n)==1){
        if(n==0.00)break;

        x = (n*100.0)+eps;
        mem(vis, -1);
//        cout<<x<<endl;
//        cout<<" "<<n<<endl;

        y = dp(0, x);

//        cout<<y<<endl;

        printf("%6.2lf%17lld\n", n, y);

    }
    return 0;
}
