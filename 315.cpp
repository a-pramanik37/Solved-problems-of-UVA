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
vector<int>v, b;
vector<int>a[105];
int vis[105];
string s;
stack<int>stk;

void dfs(int x)
{
    vis[x]=1;

    for(int i=0; i<a[x].size(); i++){
        int y = a[x][i];
        if(vis[y]==0)dfs(y);
    }
}

void f(int x)
{
    vis[x]=1;

    for(int i=0; i<a[x].size(); i++){
        int y = a[x][i];
        if(vis[y]==0)f(y);
    }

    stk.push(x);

}

int main()

{
         int n, i, j, k, y, cnt;
         while(scanf("%d", &n)==1){
                if(n==0)break;
         getchar();
            while(getline(cin, s)){

                if(s=="0")break;

                stringstream ss(s);
                int x;
                while(ss>>x)b.pb(x);
                //v.pb(b[0]);
                for(i=1; i<b.size(); i++){
                    a[b[0]].pb(b[i]);
                    a[b[i]].pb(b[0]);
                }
                b.clear();
            }

            /*for(i=1; i<=n; i++){
                    printf("%d er adjacent >> : ");
                for(j=0; j<a[i].size(); j++){
                    printf("%d ", a[i][j]);
                }
            printf("\n");
            }*/

            /*mem(vis, 0);

            for(i=1; i<=n; i++){
                if(vis[i]==0)f(i);
            }

            while(!stk.empty()){
                v.pb(stk.top());
                printf(">> %d\n", stk.top());
                stk.pop();
            }*/


            /*int ans=0;
            for(i=1; i<=n; i++){
                mem(vis, 0);
                vis[i]=1;
                cnt=0;
                for(i=0; i<v.size(); i++){
                    if(vis[v[i]]==0){
                        cnt++;
                        dfs(v[i]);
                    }
                }
                if(cnt>1)ans++;
            }

            for(i=1; i<=n; i++)a[i].clear();
            v.clear();

            printf("%d\n", ans);*/

         }
         return 0;
}
