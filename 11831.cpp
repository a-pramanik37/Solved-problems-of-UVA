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
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)

int n, m, i, j, k, p, q, x, y, poz;
char a[109][109];
string b;

int main()

{
        while(scanf("%d%d%d ", &n, &m, &k)==3){

            if(n==0 && m==0 && k==0)break;

            for(i=1; i<=n; i++){
               gets(a[i]);
            }
            cin>>b;
            for(i=0; i<n; i++){
                for(j=0; j<m; j++){
                    if(a[i][j]=='N')poz=1;
                    else if(a[i][j]=='S')poz=2;
                    else if(a[i][j]=='O')poz = 3;
                    else if(a[i][j]=='L')poz = 4;
                }
            }

            for(i=0; i<b.size(); i++){
                if(i==0){

                    if(poz==1){
                        if()
                    }

                }
            }


        }
}
