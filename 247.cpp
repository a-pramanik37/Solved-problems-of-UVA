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
map<string, int>msi;
map<int, string>mis;
vector<int>a[27], b[27], ans[27];
int vis[27], mark;
string s1, s2;
stack<int>st;
void f(int u)
{
    vis[u]++;
    for(int i=0; i<a[u].size(); i++){
        int y = a[u][i];
        if(vis[y]==0){
            f(y);
        }
    }
    st.push(u);
}


void  dfs(int u)
{
    vis[u]++;
    ans[mark].pb(u);

    for(int i=0; i<b[u].size(); i++){
        int y = b[u][i];
        if(vis[y]==0){
            dfs(y);
        }
    }

}

int main()
{
    int n, m, i, j, k, x;
    int cc=0;
    while(scanf("%d%d", &n, &m)==2 && n!=0 && m!=0){

        int nd=0;
        while(m--){
            cin>>s1>>s2;
            if(msi[s1]==0){
                msi[s1]=++nd;
            }
            if(msi[s2]==0){
                msi[s2]=++nd;
            }
            mis[msi[s1]]=s1;
            mis[msi[s2]]=s2;
            a[msi[s1]].pb(msi[s2]);
            b[msi[s2]].pb(msi[s1]);
        }

        mem(vis, 0);

        for(i=1; i<=n; i++){
            if(vis[i]==0){
                f(i);
            }
        }

        mem(vis, 0);
        mark=0;
        while(!st.empty())
        {
            x = st.top();
            st.pop();
            if(vis[x]==0){
                ++mark;
                dfs(x);
            }
        }
        if(cc!=0)cout<<endl;
        printf("Calling circles for data set %d:\n",++cc);

        for(i=1; i<=mark; i++){
            for(j=0; j<ans[i].size(); j++){
                if(j==0)cout<<mis[ans[i][j]];
                else{
                    cout<<", "<<mis[ans[i][j]];
                }
            }
            cout<<endl;
        }
        for(i=1; i<=n; i++){
            a[i].clear();
            b[i].clear();
            ans[i].clear();
        }
        msi.clear();
        mis.clear();
    }
    return 0;
}
