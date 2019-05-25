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
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

int a[1005][1005];
int vis[1005][1005];
priority_queue<pair<int, pair<int, int> > >q;
int main()

{
        int t,n , m, i, j, k;
        scanf("%d", &t);
        while(t--){
            scanf("%d%d", &n, &m);
            for(i=1; i<=n; i++){
                for(j=1; j<=m; j++){
                    scanf("%d", &a[i][j]);
                    vis[i][j]=inf;
                }
            }

            //mem(vis, -1);

            vis[1][1]=a[1][1];
            q.push(make_pair(-a[1][1], make_pair(1, 1)));
            //printf("%d %d %d\n", q.top().first, q.top().second. first, q.top().second.second);

            while(!q.empty()){
                    int tx = q.top().second.first;
                    int ty = q.top().second.second;
                    q.pop();
                    if(tx==n && ty==m)break;
                    for(i=0; i<4; i++){
                        int px = tx+fx[i];
                        int py = ty+fy[i];

                        if(px>=1 && px<=n && py>=1 && py<=m && vis[px][py]>vis[tx][ty]+a[px][py])
                        {
                            vis[px][py]=vis[tx][ty]+a[px][py];
                            q.push(make_pair(-vis[px][py], make_pair(px, py)));
                        }

                    }

            }

            while(!q.empty())q.pop();

            printf("%d\n", vis[n][m]);
        }
        return 0;
}
