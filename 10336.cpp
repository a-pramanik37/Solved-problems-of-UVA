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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r,c,t;

struct dt{

     int cn,in;

}st[30];

bool cmp(dt lhs, dt rhs){

   if(lhs.cn>rhs.cn)return true;
   else if(lhs.cn==rhs.cn && lhs.in<rhs.in)return true;
   else return false;
}

char a[300][300];
char ch;
int b[27];
dec1;

void dfs(int x, int y){

        if(x<1||x>r||y<1||y>c||a[x][y]=='.')return;

        ch = a[x][y];
            a[x][y]='.';

        if(ch==a[x][y+1])dfs(x, y+1);
        if(ch==a[x][y-1])dfs(x,y-1);
        if(ch==a[x+1][y])dfs(x+1, y);
        if(ch==a[x-1][y])dfs(x-1,y);



}


int main()

{
        scanf("%d", &t);

        for(i=1; i<=t; i++){
            cin>>r>>c;

            for(j=1; j<=r; j++){
                for(k=1; k<=c; k++){
                    cin>>a[j][k];
                }
            }

            mem(b, 0);

            for(j=1; j<=r; j++){
                for(k=1; k<=c; k++){
                    if(a[j][k]>='a'&&a[j][k]<='z'){
                            b[a[j][k]-97]++;
                        dfs(j,k);
                    }
                }

            }
            p = 1;
            for(j=0; j<26; j++){
                if(b[j]>0){
                    st[p].in=j+97;
                    st[p].cn=b[j];
                    p++;
                }
            }

            sort(st+1, st+p, cmp);
            printf("World #%d\n",i);
            for(j=1; j<p; j++){

                    printf("%c: %d",st[j].in, st[j].cn);
                    if(j!=p-1)printf("\n");
                //printf("%d %d\n",j,b[j]);
            }
            printf("\n");

        }
        return 0;
}
