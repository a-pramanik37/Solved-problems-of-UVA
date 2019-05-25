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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t,c;

char a[30][30];
dec1;

void dfs(int x, int y){

        if(x<0 ||x >=r || y<0||y>=r || a[x][y]!='1')return;

        cnt++;
        a[x][y]='0';

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
        scanf("%d", &t);
        getchar();
        //getchar();
        for(k=1; k<=t; k++){

            r=0;

            while(gets(a[r])){

                if(a[r][0]=='\0')break;
                r++;
            }

            int mx = -1;
            for(i=0; i<r; i++){

                for(j = 0; j<r; j++){

                    if(a[i][j]=='1'){
                            cnt = 0;
                        dfs(i, j);
                    mx = max(mx,cnt);
                    }

                }

            }



            printf("%d\n",mx);

            if(k!=t)printf("\n");

        }
        return 0;
}
