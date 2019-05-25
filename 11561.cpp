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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, c,t;
dec1;
char a[55][55];
int flg;


void dfs(int x, int y){



        if(x<0 || x>=r || y<0 || y>=c || a[x][y]=='#'||a[x][y]=='*' ||a[x][y]=='T' || flg==1)return;

        if(a[x][y]=='T' ||a[x][y]=='#'){
            flg = 1;
            return;
        }

        else if(a[x][y]=='G')cnt++;

        a[x][y]='*';

        dfs(x+1, y);
        dfs(x-1, y);
        dfs(x, y+1);
        dfs(x, y-1);


}

int main()

{
        while(scanf("%d%d ", &c, &r)==2){

            for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                    cin>>a[i][j];
                    if(a[i][j]=='P'){
                        x = i;
                        y = j;
                    }
                }
            }
            flg = 0;
            cnt = 0;
            dfs(x, y);

             printf("%d\n", cnt);

        }
        return 0;
}
