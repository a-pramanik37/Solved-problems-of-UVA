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

char a[205][205];
int vis[205][205], flg,ff;
dec1;
char ch;
// ( i-1 , j-1 ) , ( i-1 ,  j  )
//                       (  i  , j-1 ) , (  i  , j+1 )
//                       ( i+1 ,  j  ) , ( i+l , j+1 )

void dfs(int x, int y)
{


        if(x<0||x>=n||y<0||y>=n||a[x][y]=='w')return;

       a[x][y]='w';
       if(x==n-1){
            ff=1;
            return;
       }

        dfs(x-1,y-1);
        dfs(x-1,y);
        dfs(x,y-1);
        dfs(x+1,y);
        dfs(x,y+1);
        dfs(x+1,y+1);

}

int main()

{
    int cc = 0;
    while(scanf("%d",&n)==1){

        if(n==0)break;

        for(i=0; i<n; i++){
           scanf("%s",a[i]);
        }

        int flg=0;
        for(i=0; i<n; i++){
            if(a[0][i]=='b'){
                flg=1;
            }
        }

        if(flg==0)printf("%d W\n",++cc);

        else{

            for(i=0; i<n; i++){
                if(a[0][i]=='b'){
                        ff=0;
                    dfs(0, i);
                    if(ff==1)break;
                }
            }

            if(ff==1)printf("%d B\n",++cc);
            else printf("%d W\n",++cc);
        }

    }
        return 0;
}
