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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,t,c;

char a[104][105];
dec1;

void dfs(int x, int y){

    p = strlen(a[x]);

    if(x<1 || x>=m || y<0 || y>=p || a[x][y]=='1')return;
    cnt++;
    a[x][y]='1';

    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);

}
int vis[105][105];
int main()

{
        scanf("%d", &t);

        for(k=1; k<=t; k++){
            scanf("%d%d ",&r, &c);
            m=1;
            while(gets(a[m])){
                if(a[m][0]=='\0'){
                    break;
                }
                m++;
            }

            cnt = 0;
            c--;

            dfs(r, c);

//            for(i=1; i<=m; i++){
//                for(j=0; j<strlen(a[i]); j++){
//                    a[i][j]='1';
//                }
//            }

            printf("%d\n",cnt);
            if(k!=t)printf("\n");


        }
        return 0;
}

