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
vector<int>a[cf];
int vis[cf];
stack<int>st;

void top(int x)
{
    vis[x]=1;
    for(int i=0; i<a[x].size(); i++){
        int y = a[x][i];
        if(vis[y]==0)top(y);
    }
    st.push(x);
}

void dfs(int x)
{
    vis[x]=1;
    for(int i=0; i<a[x].size(); i++){
        int y = a[x][i];
        if(vis[y]==0)dfs(y);
    }
}



int main()
{
    int t, n, m, i, j, k, x, y;

    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &m);
        while(m--){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
        }

        mem(vis, 0);

        for(i=1; i<=n; i++){
            if(vis[i]==0)top(i);
        }
        mem(vis, 0);
        int cnt = 0;
        while(!st.empty()){
            x = st.top();
            st.pop();
            if(vis[x]==0){
                cnt++;
                dfs(x);
            }
        }
        for(i=1; i<=n; i++)a[i].clear();
        printf("%d\n", cnt);
    }
    return 0;
}


/*#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
struct data
{
    int val, in;
}arr[cf];

vector<int>a[100005];
int vis[cf], en[cf], tym;

void dfs(int u){

  vis[u]=1;
    ++tym;
  for(int k = 0; k<a[u].size(); k++){
    int z = a[u][k];
    if(vis[z]==0){
        dfs(z);
    }
  }
  en[u]=++tym;

}

void ddfs(int u)
{
    vis[u]=1;
    for(int k=0; k<a[u].size(); k++){
        int z = a[u][k];
        if(vis[z]==0){
            ddfs(z);
        }
    }
}

bool cmp(data lhs, data rhs){
    return lhs.val>rhs.val;
}

int main()

{
        int t, i, j,x, y, n,m;
        scanf("%d", &t);

        while(t--){
        scanf("%d%d", &n, &m);

        for(i=1; i<=m; i++){
            scanf("%d%d", &x, &y);
            a[x].pb(y);
            //a[y].pb(x);
        }
      mem(vis, 0);
      tym=0;
      for(i=1; i<=n; i++){
        if(vis[i]==0){
            dfs(i);
        }
      }

      for(i=1; i<=n; i++){
        arr[i].in=i;
        arr[i].val=en[i];
      }

      sort(arr+1, arr+1+n, cmp);

      mem(vis, 0);
      int cnt = 0;
      for(i=1; i<=n; i++){
        if(vis[arr[i].in]==0){
            cnt++;
            ddfs(arr[i].in);
        }

      }
     printf("%d\n", cnt);

        for(i=1; i<=n; i++)a[i].clear();
        }
        return 0;
}*/



