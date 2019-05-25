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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,c;

char a[55][55];
vector<int>vv;
dec1;

void dfs1(int u, int v){

        if(u<0||u>=r||v<0||v>=c|| a[u][v]=='.'||a[u][v]=='*')return;

        a[u][v]='.';

        dfs1(u,v+1);
        dfs1(u,v-1);
        dfs1(u+1, v);
        dfs1(u-1, v);

}



void dfs(int x, int y){

        if(x<0 || x>=r||y<0 || y>=c ||a[x][y]=='.')return;

        if(a[x][y]=='X'){
                dfs1(x, y);
                cnt++;
        }

         a[x][y]='.';

         dfs(x,y-1);
        dfs(x, y+1);
        dfs(x-1,y);
        dfs(x+1, y);

}


int main()

{
    int cc=0;
        while(scanf("%d%d", &c, &r)==2 && c!=0 && r!=0){


            for(i=0; i<r; i++){
                scanf("%s",a[i]);
            }

            for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                    if(a[i][j]=='*' || a[i][j]=='X'){
                            cnt = 0;
                        dfs(i, j);
                        vv.pb(cnt);
                    }
                }
            }
            sort(vv.begin(), vv.end());

            printf("Throw %d\n",++cc);

            for(i=0; i<vv.size(); i++){
                if(i!=vv.size()-1)printf("%d ",vv[i]);
            }
            printf("%d\n\n",vv[vv.size()-1]);


            vv.clear();
        }
        return 0;
}

