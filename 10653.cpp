#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
typedef pair<int, int>pii;

int fx[]={0, 0, 1, -1};
int fy[]={1, -1, 0, 0};



queue<pii>q;

int vis[1009][1009];
int a[1005][1005];
int main()

{
        int r,c, n, i, j, k, p,x, y, z;
        while(scanf("%d%d", &r, &c)==2 && r!=0 && c!=0){

            scanf("%d", &n);
            memset(a, 0, sizeof a);

            for(i=1; i<=n; i++){
                scanf("%d%d", &p, &z);
                for(j=1; j<=z; j++){
                    scanf("%d", &x);
                    a[p][x]=1;
                }
            }

            int x1, y1, x2, y2;
            scanf("%d%d", &x1, &y1);
            scanf("%d%d", &x2, &y2);

            mem(vis, -1);

            q.push(pii(x1, y1));
            vis[x1][y1]=0;

            while(!q.empty()){

                int tx = q.front().first;
                int ty = q.front().second;
                q.pop();
                for(i=0; i<4; i++){
                    int px = tx+fx[i];
                    int py = ty+fy[i];

                    if(px>=0 && px<r && py>=0 && py<c && vis[px][py]==-1 && a[px][py]!=1){
                        vis[px][py] = vis[tx][ty]+1;
                        q.push(pii(px, py));
                    }

                }

            }
            printf("%d\n", vis[x2][y2]);
        }
        return 0;
}
