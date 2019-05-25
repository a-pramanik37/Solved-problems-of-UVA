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

int main()
{
    ll l1, r1, l2, r2, k, x, y, p;

    while(cin>>l1>>r1>>l2>>r2>>k){


       ll x = max(l1, r1);
       ll y = min(l2, r2);

       if(x>y){
        printf("0\n");
        continue;
       }
       ll p = y-x+1;
       if(k>=x && k<=y)p--;
       printf("%lld\n", p);
    }
    return 0;
}
