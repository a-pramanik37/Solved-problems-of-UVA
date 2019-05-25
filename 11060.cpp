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
map<int, string>mp2;
vector<int>a[105];

int vis[105];
string s, t;
stack<int>st;
void dfs(int u)
{
    vis[u]=1;

    for(int k =0; k<a[u].size(); k++){
        int y = a[u][k];
        if(vis[y]==0){
            dfs(y);
        }
    }
    st.push(u);
}


int main()

{
        int n, m, i, j, k;
        int cc=0;
        while(scanf("%d", &n)==1){

            for(i = 1; i<=n; i++){
                cin>>s;
                mp[s]=i;
                mp2[i]=s;
            }

            scanf("%d", &m);
            mem(vis, 0);
            for(int i =1; i<=m; i++){
                cin>>s>>t;
                int x = mp[s];
                int y = mp[t];

                a[x].pb(y);
            }

            mem(vis, 0);

           for(i=n; i>=1; i--){
            if(vis[i]==0){
                dfs(i);
            }
           }


            int cnt=0;
            printf("Case #%d: Dilbert should drink beverages in this order:",++cc);
            while(!st.empty()){
                    cnt++;
                int p = st.top();
                st.pop();
                if(cnt==n)cout<<" "<<mp2[p]<<".";

                else cout<<" "<<mp2[p];

            }
            printf("\n\n");
            mp.clear();
            mp2.clear();
            for(i=1; i<=n; i++)a[i].clear();
        }
        return 0;
}
