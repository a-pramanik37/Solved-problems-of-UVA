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
map<string, int>mp;

vector<int>a[5009];
int vis[5009];
string s, t;
int cnt;
void dfs(int u)
{
    vis[u]=1;
    cnt++;
    for(int k = 0; k<a[u].size(); k++){
        int y = a[u][k];
        if(vis[y]==0){
            dfs(y);
        }
    }

}

int main()

{
        int c, r, i, j, k;

        while(scanf("%d%d", &c, &r)==2)
        {
            if(c==0 && r==0)break;
            for(i=1; i<=c; i++){
                cin>>s;
                mp[s]=i;
            }
            for(i=1; i<=r; i++){
                cin>>s>>t;
                a[mp[s]].pb(mp[t]);
                a[mp[t]].pb(mp[s]);
            }

            mem(vis, 0);
            int mx = 0;

            for(i=1; i<=c; i++){
                if(vis[i]==0){
                    cnt=0;
                    dfs(i);
                    mx = max(mx, cnt);
                }
            }

            printf("%d\n", mx);

            mp.clear();

            for(i=1; i<=c; i++)a[i].clear();

        }
        return 0;
}
