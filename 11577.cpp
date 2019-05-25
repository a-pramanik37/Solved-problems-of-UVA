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
char a[209];
int b[27];

vector<int>aa;
int main()

{
        scanf("%d ", &t);

        for(x=1;x<=t; x++){
            gets(a);

            mem(b, 0);
            mx=-1;
            for(i=0; i<strlen(a); i++){
                    if(a[i]>=65 && a[i]<=90){
                        a[i] = a[i]+32;
                    }
                if(a[i]>=97 && a[i]<=122){
                    b[a[i]-97]++;
                    mx = max(mx, b[a[i]-97]);
                }
            }
            j=0;
            for(i=0; i<26; i++){
                if(b[i]==mx){
                    aa.pb(i);
                }
            }
            sort(aa.begin(), aa.end());
            for(i=0; i<aa.size(); i++){
                printf("%c", aa[i]+97);
            }
            printf("\n");
            aa.clear();
        }
        return 0;
}
