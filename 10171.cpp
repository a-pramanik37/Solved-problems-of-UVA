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
vector<pii>a[30],b[30];
string s;
priority_queue<pii, vector<pii> , greater<pii> >q;
int yo[30][30], vis1[30], vis2[30];
int main()
{
    int n, i, j, k, x, y, src1, src2, cost;

    while(scanf("%d", &n)==1 && n!=0){

        getchar();
        mem(yo,-1);
        for(i=1; i<=n; i++){
            getline(cin , s);
            cost=0;
            for(j=8; j<s.size(); j++){
                cost = cost*10+s[j]-48;
            }

            x = s[4]-64;
            y = s[6]-64;
            if(s[2]=='U'){
                a[x].pb(pii(y, cost));
                b[x].pb(pii(y, cost));
            }
            else if(s[2]=='B'){
                a[x].pb(pii(y, cost));
                a[y].pb(pii(x, cost));
                b[x].pb(pii(y, cost));
                b[y].pb(pii(x, cost));
            }

            if(s[0]=='Y'){
                yo[x][y]=0;
                yo[y][x]=0;
            }

        }

        getline(cin, s);
        src1 = s[0]-64;
        src2 = s[2]-64;

        for(i=1; i<=26; i++)vis1[i]=inf;

        q.push(pii(src1, 0));
        vis1[src1]=0;

        while(!q.empty()){

            x = q.top().first;
            q.pop();

            for(i=0; i<a[x].size(); i++){
                y = a[x][i].first;
                cost = a[x][i].second;

                if(yo[x][y]==0 && yo[y][x]==0){
                    if(vis1[y]<vis1[x]+cost){
                        vis1[y] = vis1[x]+cost;
                        q.push(pii(y, vis1[y]));
                    }
                }

            }

        }

        for(i=1; i<=27; i++)vis2[i]=inf;

        q.push(pii(src2, 0));
        vis2[src2]=0;

        while(!q.empty())
        {
            x = q.top().first;
            q.pop();

            for(i=0; i<b[x].size(); i++){
                y = b[x][i].first;
                cost = b[x][i].second;

                if(yo[x][y]==-1 && yo[y][x]==-1){
                    if(vis2[y] = vis2[x]+cost){

                        vis2[y] = vis2[x]+cost;
                        q.push(pii(y, vis2[y]));

                    }
                }

            }
        }
        int mx = 0;
        for(i=2; i<=26; i++){
            if(vis1[i]!=0 && vis2[i]!=0 && vis1[i]!=inf && vis2[i]!=inf){
                mx = max(mx, vis1[i]+vis2[i]);
            }
        }

        printf("%d\n", mx);
    }
    return 0;
}
