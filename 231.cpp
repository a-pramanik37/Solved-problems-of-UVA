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
int vis[3005];
vector<int>a;
int dp(int x)
{
    if(vis[x]!=-1)return vis[x];

    int mx = 0;

    for(int i=x+1; i<a.size(); i++){
        if(a[i]<a[x]){
            int z = dp(i);
            if(z>mx){
                mx = z;
            }
        }
    }
    vis[x]=1+mx;
    return vis[x];

}

int main()
{
    int i, j, k, x;
    int cc=0;
    while(scanf("%d", &x)==1 && x!=-1){

            a.pb(x);
    while(1){
        scanf("%d", &x);
        if(x==-1)break;
        a.pb(x);
    }

        mem(vis, -1);

        int lis=0;
        for(i=0; i<a.size(); i++){
                 k = dp(i);
            if(k>lis){
                lis = k;
            }
        }

        a.clear();

        if(cc!=0)printf("\n");

        printf("Test #%d:\n", ++cc);
        printf("  maximum possible interceptions: %d\n", lis);

    }
    return 0;
}
