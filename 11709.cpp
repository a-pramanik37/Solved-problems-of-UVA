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
string s1, s2;
stack<int>st;
vector<int>a[1005], b[1005];
int vis[1005], mrk;
map<string, int>mp;

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

void dfs(int u)
{
    vis[u]++;

    for(int i=0; i<b[u].size(); i++){
        int y = b[u][i];
        if(vis[y]==0){
            dfs(y);
        }
    }

}

int main()
{
    int p, t, i, j, k;
    while(scanf("%d%d", &p, &t)==2){
            if(p+t==0)break;
            getchar();
        for(i=1; i<=p; i++){
            getline(cin, s1);
            mp[s1]=i;
        }

        for(i=1; i<=t; i++){
            getline(cin, s1);
            getline(cin, s2);
            a[mp[s1]].pb(mp[s2]);
            b[mp[s2]].pb(mp[s1]);
        }

        mem(vis, 0);

        for(i=1; i<=p; i++){
            if(vis[i]==0){
                f(i);
            }
        }
        mem(vis, 0);
        mrk=0;
        while(!st.empty()){

            k=st.top();
            st.pop();

            if(vis[k]==0){
                    ++mrk;
                dfs(k);
            }
        }
        printf("%d\n", mrk);
        for(i=1; i<=p; i++){
            a[i].clear();
            b[i].clear();
        }
        mp.clear();
    }
    return 0;
}
