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
char a[25], b[25], c[25];
int main()

{
        scanf("%d ", &t);
        int cc = 0;
        while(t--){
            gets(a);
            gets(b);

            if(strcmp(a, b)==0)printf("Case %d: Yes\n",++cc);

            else{

                j=-1;
                for(i=0; i<strlen(a); i++){
                    if(a[i]!=' '){
                        c[++j]=a[i];
                    }
                }
                c[++j]='\0';

                if(strcmp(b, c)==0)printf("Case %d: Output Format Error\n", ++cc);
                else printf("Case %d: Wrong Answer\n", ++cc);

            }

        }
        return 0;

}
