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

char a[10009];
double tk, tot;
double b[ 300], val[300];
dec1;
char ch;


int main()

{
        cin>>t;

        while(t--){
                mem(b, 0);
                mem(val, 0);
            scanf("%d ", &k);


            ff(i,1 ,k){

              scanf("%c %lf ", &ch, &tk);
              p = ch;
              b[p] = tk;

            }
            tot = 0;
            scanf("%d ", &m);

            for(j=1; j<=m; j++){

                gets(a);
                for(i=0; i<strlen(a); i++){
                    p = a[i];
                    if(b[p]>0)tot+=b[p];
                }

            }

            printf("%.2lf$\n", tot/100.0);

        }

        return 0;
}
