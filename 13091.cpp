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

char a[10][10];
dec1;
int main()

{
        scanf("%d", &t);

        for(x=1; x<=t; x++){
            for(i=0; i<5; i++){
                scanf("%s", a[i]);
            }
            int in;
            char ch;
            int g=0;
            for(i=0; i<5; i++){
                for(j=0; j<5; j++){
                    if(a[i][j]=='|'){
                        in=j;
                        g=1;
                        break;
                    }
                }
                if(g==1)break;
            }
            g=0;
            for(i=0; i<5; i++){
                for(j=0; j<5; j++){
                    if(a[i][j]=='>' ||a[i][j]=='<'){
                        y=i;
                        g=1;
                        break;
                    }
                }
                if(g==1)break;
            }

           int flg=0;

           for(i=in+1; i<5; i++){
              if(a[y][i]=='>'){
                flg=1;
                break;
              }
           }

           if(flg==0){

           for(i=0; i<in; i++){
            if(a[y][i]=='<'){
                flg=1;
                break;
            }
           }
           }

            if(flg==1)printf("Case %d: No Ball\n",x);
            else printf("Case %d: Thik Ball\n",x);

        }
        return 0;
}
