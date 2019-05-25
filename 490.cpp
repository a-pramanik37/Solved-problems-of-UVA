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
string a[109];
dec1;
int main()

{
        while(getline(cin, a[0])){
            x = 0;
            mx = 0;
            if(a[0].size()>mx)mx = a[0].size();

            while(getline(cin, a[++x])){
                  if(a[x].size()>=mx)mx = a[x].size();
                if(a[x].size()==0){
                    break;
                }
            }
          j = 0;
            while(j<mx){

                 for(i=x-1; i>=0; i--){


                      if(a[i].size()>j){
                        printf("%c", a[i][j]);
                      }

                    else printf(" ");
                 }
               printf("\n");
                j++;
            }

        }
        return 0;
}

