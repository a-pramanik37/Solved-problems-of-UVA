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
ll a[1000005];
int main()
{
    ll p, y, i, j, x,l, r;
    while(scanf("%lld", &y)==1){
        scanf("%lld", &p);
        ll sz=0;
        mem(a, 0);
        while(p--){
            scanf("%lld", &x);
            a[x]++;
            sz=max(sz, x);
        }

        ll st=1, sum=0, mx=0;

        for(i=1; i<=sz; i++){
            sum+=a[i];
            if((i-st+1)==y){
                if(sum>mx){
                    mx=sum;
                    l=st;
                    r=i;
                }
                sum-=a[st];
                st++;
            }
        }

        for(i=l; i<=sz; i++){
            if(a[i]!=0){
                l=i;
                break;
            }
        }

      cout<<mx<<" "<<l<<" "<<r<<endl;
    }
    return 0;
}
