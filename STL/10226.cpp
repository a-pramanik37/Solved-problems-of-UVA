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



int main()

{

        double n, p, x, y,cnt, mx, mn, ans, u, v, z, l, r,k;
        int i, j, t;
        set<string>s;
        map<string, double>m;
        set<string>:: iterator it;

        string a;

        scanf("%d ", &t);

        while(t--){
            k=0;
            while(getline(cin, a)){
                if(a.size()==0)break;
                s.insert(a);
                m[a]++;
                k++;
            }



           for(it = s.begin(); it!=s.end(); it++){
            x = m[*it];
            cout<<*it;
            printf(" %.4lf\n", (x*100.0)/k);
           }
           if(t>0)printf("\n");
           s.clear();
           m.clear();
        }
        return 0;
}
