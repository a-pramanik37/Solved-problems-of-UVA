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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
dec1;
int w, b;
char a[15][15];

void dfs1(int x, int y){

        if(x<0 || x>=9 || y<0 || y>=9 || a[x][y]=='X'||a[x][y]=='O'||a[x][y]=='@'){

          if(a[x])

        }

}

int main()

{
        while(cin>>a[0][0]){
                b= 0;
                w = 0;

            for(i=1; i<9; i++){
                cin>>a[0][i];
                if(a[0][i]=='X')b++;
                else if(a[0][i]=='O')w++;
            }

            for(i=1; i<9; i++){
                for(j=0; j<9; j++){
                    cin>>a[i][j];
                    if(a[i][j]=='X')b++;
                    else if(a[i][j]=='O')w++;
                }
            }

            for(i=0; i<9; i++){
                for(j=0; j<9; j++){
                    if(a[i][j]=='.'){
                        dfs1(i, j);
                    }
                }
            }


        }
}
