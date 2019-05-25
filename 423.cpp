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
typedef pair<int, int>pii;

vector<pii>a[105];
priority_queue<pii, vector<pii>, greater <pii> >q;
int vis[105];
string s;
int nn(string a){
    int n=0;
    for(int i=0; i<a.size(); i++){
        n = n*10+a[i]-48;
    }
    return n;
}
int main()
{
    int n, i, j, k, x, y;

    while(scanf("%d", &n)==1){


        for(i=2; i<=n; i++){
            for(j=1; j<i; j++){
                cin>>s;
                if(s!="x"){
                        a[i].pb(pii(j, nn(s)));
                        a[j].pb(pii(i, nn(s)));
                }
            }
        }

        for(i=1; i<=n; i++)vis[i]=inf;

        vis[1]=0;

        q.push(pii(1, 0));

        while(!q.empty()){

            x = q.top().first;
            q.pop();

            for(i=0; i<a[x].size(); i++){
                y = a[x][i].first;
                k = a[x][i].second;
                if(vis[y]>vis[x]+k){
                    vis[y]=vis[x]+k;
                    q.push(pii(y, k));
                }
            }

        }

        int mx = 0;

        for(i=2; i<=n; i++){
            mx = max(mx, vis[i]);
            //printf("%d ",vis[i]);
        }


        printf("%d\n", mx);

        for(i=1; i<=n; i++)a[i].clear();
    }
    return 0;
}
