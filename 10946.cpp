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

struct dt
{
    int in, val;
}b[100000];

dec1;
char a[55][55];

void dfs(int x, int y){

        if(x<1||x>r||y<1||y>c||a[x][y]=='.')return;
        cnt++;
        char ch;
        ch = a[x][y];
        a[x][y]='.';

        if(a[x][y+1]==ch)dfs(x, y+1);
        if(a[x][y-1]==ch)dfs(x, y-1);
        if(a[x+1][y]==ch)dfs(x+1, y);
        if(a[x-1][y]==ch)dfs(x-1, y);

}

bool cmp(dt lhs, dt rhs){

        if(lhs.val>rhs.val) return true;
        else if(lhs.val==rhs.val && lhs.in<rhs.in)return true;
        else return false;

}

int main()

{
    int cc=1;
        while(cin>>r>>c){
            if(r==0&&c==0)break;

            for(i=1; i<=r; i++){
                for(j=1; j<=c; j++){
                    cin>>a[i][j];
                }
            }
            p=1;
            for(i=1; i<=r; i++){
                for(j=1; j<=c; j++){
                        cnt = 0;
                    if(a[i][j]!='.'){
                            b[p].in=a[i][j];
                        dfs(i,j);

                        b[p].val = cnt;
                        p++;
                    }
                }
            }

            sort(b+1, b+p, cmp);
            printf("Problem %d:\n",cc++);
            for(i=1; i<p; i++){
                printf("%c %d\n",b[i].in, b[i].val);
            }


        }
        return 0;
}
