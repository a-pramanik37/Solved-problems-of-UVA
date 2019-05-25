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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t,c;

char a[35][85];
char bn, ch,bal;
dec1;
int len, flg;


void dfs(int x, int y){


    len = strlen(a[x]);

    if(x<0 || x>=r || y<0 || y>=len|| a[x][y]!=32)return;

        a[x][y]=ch;

        dfs(x,y-1);
        dfs(x, y+1);
        dfs(x-1,y);
        dfs(x+1, y);

}

int main()

{
        while(gets(a[0])){

            r=1;

            while(gets(a[r])){
                if(a[r][0]=='_'){
                    break;
                }
                r++;
            }

            for(i=0; i<strlen(a[0]); i++){
                if(a[0][i]!=' '){
                    bn = a[0][i];
                    break;
                }
            }
            //printf("%c\n",bn);

            for(i=0; i<r; i++){
                c = strlen(a[i]);
                for(j=0; j<c; j++){
                    if(a[i][j]==32){
                            if(a[i+1][j]!=32 && a[i+1][j]!=bn){
                                 ch = a[i+1][j];
                                dfs(i,j);
                            }
                            else if(a[i-1][j]!=32 && a[i-1][j]!=bn){
                                    ch = a[i-1][j];
                                    dfs(i,j);
                            }
                            else if(a[i][j+1]!=32 && a[i][j+1]!=bn){
                                    ch = a[i][j+1];
                                    dfs(i,j);
                            }
                            else if(a[i][j-1]!=32 && a[i][j-1]!=bn){
                                     ch = a[i][j-1];
                                    dfs(i,j);
                            }
                    }
                }
            }

            for(i=0; i<=r; i++){
                printf("%s\n",a[i]);
            }

        }
        return 0;
}
