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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t, c;
dec1;

char a[25][25];
char ch;
void dfs(int x, int y){

     if(x<0 || x>=r || y<0 || y>=c|| a[x][y]!=v)return;

     if(p>0){
        cnt++;
     }

     a[x][y]='.';

     dfs(x, y+1);
     dfs(x, y-1);
     dfs(x+1, y);
     dfs(x-1, y);
     if(y==c-1)dfs(x, 0);
     if(y==0)dfs(x, c-1);

}

int main()

{
        while(scanf("%d%d", &r, &c)==2){

            for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                    cin>>a[i][j];
                }
            }

            scanf("%d%d", &m, &n);

            mx = 0;

            v = a[m][n];
            p = 0;

            dfs(m, n);

            p++;
            for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                    cnt = 0;
                    if(a[i][j]==v){
                    dfs(i, j);
                    mx = max(mx, cnt);
                    }
                }
            }

            printf("%d\n", mx);
        }
        return 0;
}
