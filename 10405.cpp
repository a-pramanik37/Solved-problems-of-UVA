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
char  a[1005],b[1005];
ll l1, l2;
ll vis[1005][1005];

ll dp(ll s1, ll s2){

       if(a[s1]=='\0'||b[s2]=='\0')return 0;

        if(vis[s1][s2]!=0)return vis[s1][s2];

        ll xx=0, yy=0;

        if(a[s1]==b[s2]){
            vis[s1][s2]=dp(s1+1, s2+1)+1;
            return vis[s1][s2];
        }
        else{
            xx = dp(s1+1, s2);
            yy = dp(s1, s2+1);
            vis[s1][s2]=max(xx, yy);
            return vis[s1][s2];
        }

}

int main()

{
        while(gets(a)){
                gets(b);
            printf("%lld\n",dp(0, 0));
            mem(vis, 0);
        }
        return 0;
}
