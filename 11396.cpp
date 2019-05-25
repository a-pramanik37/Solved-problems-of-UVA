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

int i, j, k, p, n, m, x, y, cnt;
vector<int>a[303];
int vis[309];
queue<int>q;

int main()

{
        while(scanf("%d", &n)==1 && n!=0){


            while(scanf("%d%d", &x, &y)==2){
                    if(x==0 && y==0)break;
                a[x].pb(y);
                a[y].pb(x);

            }

            /*for(i=1; i<=n; i++){

                for(j = 0; j<a[i].size()-2; j++){

                    for(k = j+1; k<a[i].size()-1; k++){
                        x = a[a[i][j]].size();
                        y = a[a[i][k]].size();
                        if(y>x){
                            swap(x, y);
                        }
                    }
                }

            }*/

            int flg = 0;

            mem(vis, 0);
            vis[1]=1;
            q.push(1);

            while(!q.empty()){

                x = q.front();
                q.pop();
                cnt = 0;
                for(i=0; i<a[x].size(); i++){
                    y = a[x][i];
                    if(vis[y]==0 && cnt<=2){
                        vis[y]=1;
                        q.push(y);
                        cnt++;
                    }
                }
                if(cnt<3)flg=1;
            }
            if(flg==0)printf("YES\n");
            else printf("NO\n");

            for(i=1; i<=n; i++)a[i].clear();
        }
        return 0;
}
