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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r;

int  gcd(int a, int b)
{
    int temp, gcd;
    if(a==0) gcd = a;
    else if(b==0) gcd = b;
    else {
        while(b!=0){
            temp = b;
            b = a%b;
            a = temp;
        }
        gcd = a;
    }
    return gcd;
}

int main()

{
        dec1;
        int a[10005];
        int bb[10004];
        vector<int>b;

        while(scanf("%d", &n)==1){

            ff(i,1,n)scanf("%d", &a[i]);

            sort(a+1, a+n+1);



            ff(i, 1, n){
            for(j = i+1; j<=n; j++){
                    if(a[j]>0){
                    k = gcd(a[i], a[j]);
                    if(k==1){
                        b.pb(a[i]);
                        b.pb(a[j]);
                            a[i]=0;
                            a[j]=0;
                            break;
                    }
                    }
            }
            }

            vector<int>c;

            ff(i,1,n){
            if(a[i]>0)c.pb(a[i]);
               }

            for(i=0; i<c.size(); i++){

            }

        }
        return 0;
}
