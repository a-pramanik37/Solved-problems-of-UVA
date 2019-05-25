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
#define pi (2.0*acos(0.0))
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t, ans1, ans2, src;

vector<int>a[2509];
queue<int>q;
int arr[3000], vis[3000];
dec1;

int main()

{
        while(scanf("%d", &n)==1){
            for(i=0; i<n; i++){
                scanf("%d", &p);

                for(j=0; j<p; j++){
                    scanf("%d", &x);
                    a[i].pb(x);
                }

            }

//            for(i=0; i<n; i++){
//                for(j=0; j<a[i].size(); j++){
//                    printf("%d ",a[i][j]);
//                }
//                printf("\n");
//            }

            scanf("%d", &t);

            while(t--){
                scanf("%d", &src);

                if(a[src].size()<1)printf("0\n");

                else{

                mem(vis, -1);
                mem(arr, 0);

                ans1=-1;

                vis[src]=0;

                q.push(src);

                while(!q.empty()){

                    x = q.front();
                    q.pop();
                    for(j=0; j<a[x].size(); j++){
                        y = a[x][j];
                        if(vis[y]==-1){
                            vis[y] = vis[x]+1;
                            q.push(y);
                            m = vis[y];
                            arr[m]++;
                            if(arr[m]>ans1){
                                 ans1 = arr[m];
                                 ans2 =m;
                            }
                        }
                    }

                }

                 printf("%d %d\n",ans1, ans2);

                }
            }

        }
        return 0;
}
