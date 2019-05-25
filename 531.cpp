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

string a[104], b[104], ans[104];

int vis[104][104], cnt1=0, cnt2=0, cnt;

int dp(int x, int y)
{
    if(x>cnt1 || y>cnt2)return 0;

    if(vis[x][y]!=-1)return vis[x][y];

    if(a[x]==b[y]){
        vis[x][y]=1+dp(x+1, y+1);
        return vis[x][y];
    }

    vis[x][y]=max(dp(x+1, y), dp(x, y+1));
    return vis[x][y];

}

void pr(int x, int y)
{
    if(x>cnt1 || y>cnt2)return;

    if(a[x]==b[y]){
        ans[++cnt]=a[x];
        pr(x+1, y+1);
    }
    else{
        if(vis[x+1][y]>vis[x][y+1]){
            pr(x+1, y);
        }
        else pr(x, y+1);
    }

}

int main()
{


    while(cin>>a[++cnt1]){

        while(1)
        {
            cin>>a[++cnt1];
            if(a[cnt1]=="#"){
                cnt1--;
                break;
            }
        }

        while(1){
            cin>>b[++cnt2];
            if(b[cnt2]=="#"){
                cnt2--;
                break;
            }
        }
        mem(vis, -1);
        int z = dp(1, 1);
        //printf("%d\n", z);
        cnt = 0;
        pr(1, 1);
        for(int i=1; i<=cnt; i++){
            if(i==1)cout<<ans[i];
            else cout<<" "<<ans[i];
        }
        printf("\n");

        cnt1=0, cnt2=0;

    }
    return 0;
}

