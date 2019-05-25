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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r;


dec1;


char a[105][105];

void dfs(int x, int y){

        if(x<1||x>m ||y<1||y>n||a[x][y]=='*')return;

        a[x][y]='*';

        dfs(x,y-1);
        dfs(x, y+1);
        dfs(x-1,y);
        dfs(x+1, y);
        dfs(x-1,y-1);
        dfs(x-1,y+1);
        dfs(x+1, y-1);
        dfs(x+1,y+1);
}

int main()

{
        while(cin>>m){

            if(m==0)break;
            cin>>n;

            for(i=1; i<=m; i++){
                for(j=1; j<=n; j++){
                    cin>>a[i][j];
                }
            }
            cnt=0;

            for(i=1; i<=m; i++){
                for(j=1; j<=n; j++){
                    if(a[i][j]=='@'){
                             cnt++;
                        dfs(i,j);
                    }
                }
            }

            printf("%d\n",cnt);
        }
        return 0;
}
