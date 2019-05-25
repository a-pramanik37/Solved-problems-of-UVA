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
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,sum;

vector<int> b;

int vis[15][15], a[15][15];
dec1;


void dfs(int x, int y){

    if(x<1 || x>n || y<1 || y>n ||vis[x][y]==1)return;

        else if((x-p==0 || x-n==0||y-p==0||y-n==0)){

        sum+=a[x][y];

        vis[x][y]=1;

        dfs(x,y-1);
        dfs(x, y+1);
        dfs(x-1,y);
        dfs(x+1, y);
        }

}

int main()

{
        while(scanf("%d", &n)==1){


            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                    scanf("%d", &a[i][j]);
                }
            }

            p=0;

            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                    if(vis[i][j]!=0){
                            p++;
                        sum=0;
                        dfs(i, j);
                        printf("%d ", sum);
                        //b.pb(sum);

                    }
                }
            }
//            for(i=0; i<b.size(); i++){
//                printf("%d ", b[i]);
//            }
            printf("\n");

        }
        return 0;
}
