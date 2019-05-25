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
#define mem(a, b) memset(a, b, sizeof a)
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, t, r;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,t,c;

char a[35][85];
int vis[35][85];
dec1;

void dfs(int x, int y){

        if(x<0 || x>r ||y<0 || y>=c||(a[x][y]>=65 && a[x][y]<=90)||a[x][y]=='#' ||a[x][y]=='_')return;

         a[x][y]='#';

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
        cin>>t;
        getchar();
           for(k=1; k<=t; k++){

                r = -1;
            while(gets(a[++r])){
                if(a[r][0]=='_')break;
            }


             for(i=0; i<=r; i++){
                c = strlen(a[i]);
                for(j=0; j<c; j++){
                        vis[i][j]=1;
               }
            }

            for(i=0; i<=r; i++){
                c = strlen(a[i]);
                for(j=0; j<c; j++){

                    if(a[i][j]=='*'){
                        dfs(i,j);
                    }
                }
            }

            for(i=0; i<=r; i++){
                    c = strlen(a[i]);
                for(j=0; j<c; j++){
                    if(vis[i][j]==1){
                            printf("%c",a[i][j]);
                            vis[i][j]=0;
                    }
                }
                    printf("\n");
            }

        }
        return 0;
}
