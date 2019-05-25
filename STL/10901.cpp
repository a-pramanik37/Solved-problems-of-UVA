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

queue<int>left, r8;
vector<int>a;
char b[10];
int main()

{
        scanf("%d", &v);

        while(v--){

            scanf("%d%d%d", &n, &t, &m);

            for(i=1; i<=m; i++){
                scanf("%d %s",&x, b);
                if(strcmp(b, "left")==0){
                    left.push(x);
                }
                else r8.push(x);
            }
            k = 0;
            while(1){

                if(left.empty() && r8.empty())break;

                if(!left.empty()){

                }

            }

        }

}
