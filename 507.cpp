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
ll a[20005];
int main()
{
    ll t, n, i, j, mx, l, r,sum;

    scanf("%lld", &t);
    ll cc=0;
    while(t--){

        scanf("%lld", &n);

        for(i=1; i<n; i++)scanf("%lld", &a[i]);

        sum =0, mx=0;
        ll lenmx=0;

        ll st=1;
        for(i=1; i<n; i++){
            sum+=a[i];
            if(sum<=0){
                sum=0;
                st=i+1;
            }
            else if(sum>=mx){
                mx=max(sum, mx);
                if(i-st+2>lenmx){
                        lenmx=i-st+2;
                    l=st;
                    r=i+1;
                }

            }
        }
        //printf("Maximum = %lld\n", mx);
        if(mx==0)printf("Route %lld has no nice parts\n", ++cc);
        else printf("The nicest part of route %lld is between stops %lld and %lld\n",++cc, l, r);
    }
    return 0;
}
