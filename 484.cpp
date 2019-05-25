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
map<ll, ll>mp;
queue<ll>q;
int main()
{
    ll n, i, j, k, x, y;

    while(scanf("%lld", &x)==1){

        q.push(x);
        mp[x]++;

        while(scanf("%lld", &x)!=EOF){

            if(mp[x]==0){
                q.push(x);
            }
            mp[x]++;
        }
        while(!q.empty()){
            x = q.front();
            q.pop();
            printf("%lld %lld\n", x, mp[x]);
        }
        mp.clear();
    }
    return 0;
}
