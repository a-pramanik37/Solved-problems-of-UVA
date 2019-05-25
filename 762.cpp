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
vector<int>a[20000], v;
int vis[20000], par[20000];
string s, t;
priority_queue<int, vector<int>, greater<int> >q;
int main()

{
        int n, i, j, src, des, x, y;
        int flg=0;
        while(scanf("%d", &n)==1){
            int node=0;
            for(i=1; i<=n; i++){
                cin>>s>>t;
                if(mp.find(s)==mp.end()){
                    mp[s]=++node;
                    mp2[node]=s;
                }
                if(mp.find(t)==mp.end()){
                    mp[t]=++node;
                    mp2[node]=t;
                }
                a[mp[s]].pb(mp[t]);
                a[mp[t]].pb(mp[s]);
            }

            cin>>s>>t;
              if(flg==1)printf("\n");

              if(mp.find(s)==mp.end()||mp.find(t)==mp.end()){
                printf("No route\n");
                 scanf("\n");
            mp.clear();
            mp2.clear();
            v.clear();
            for(i=1; i<=node; i++)a[i].clear();
            flg=1;
                continue;
              }
            src = mp[s];
            des = mp[t];

            for(i=1; i<=node; i++)vis[i]=inf;
            mem(par, 0);
            q.push(src);
            vis[src]=0;
            par[src]=src;
            while(!q.empty()){
                x = q.top();
                q.pop();
                for(i=0; i<a[x].size(); i++){
                     y = a[x][i];
                    if(vis[y]>(vis[x]+1)){
                        vis[y] = vis[x]+1;
                        q.push(y);
                        par[y]=x;
                    }
                }
            }


            if(vis[des]==inf)printf("No route\n");
            else{
                   i=des;
                while(1){
                        v.pb(i);
                         if(par[i]==i)break;
                        i=par[i];
                }
                reverse(v.begin(), v.end());

                for(i=0; i<v.size()-1; i++){
                    cout<<mp2[v[i]]<<" "<<mp2[v[i+1]]<<endl;
                }

            }
            scanf("\n");
            mp.clear();
            mp2.clear();
            v.clear();
            for(i=1; i<=node; i++)a[i].clear();
            flg=1;
        }
        return 0;
}
