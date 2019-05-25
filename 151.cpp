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
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t, flg,poz;
dec1;
vector<int>a;
void bp(int n){
        for(z = 1; z<=n;z++){
            a.pb(z);
        }
}

int main()

{
       while(scanf("%d", &n)==1 && n!=0){
        bp(n);
        flg = 0;
        m = 2;
        while(1){

            poz = 0;
            while(1){

               if(a[poz]==13 && a.size()==1){
                flg = 1;
                break;
               }
               else if(a[poz]==13){
                break;
               }
               else{
                a.erase(a.begin()+poz);
               }

               if(poz+m>a.size()){
                poz = (a.size()-poz+1+m)%a.size();
               }



            }
            if(flg==0){
                bp(n);
                m++;
            }

            if(flg==1)break;
        }
        printf("%d\n", m);

       }
       return 0;
}
