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
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)
#define dec2 ll n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;
#define dec1 int n, m, p, x, y, i, j, k, cnt, mx, mn, ans, u, v, z, l, r, t;

dec2;
string st, ed, a;
ll bp(string a){
    if(a=="January")return 1;
    else if(a=="February")return 2;
    else if(a=="March")return 3;
    else if(a=="April")return 4;
    else if(a=="May")return 5;
    else if(a=="June")return 6;
    else if(a=="July")return 7;
    else if(a=="August")return 8;
    else if(a=="September")return 9;
    else if(a=="October")return 10;
    else if(a=="November")return 11;
    else if(a=="December")return 12;
}

int main()

{
        ll d1, d2, m1, m2, y1, y2;
        scanf("%lld", &t);
        int cc = 0;
        while(t--){
            cin>>a;
            scanf("%lld,%lld",&d1, &y1);
            m1 = bp(a);
            cin>>a;
            scanf("%lld,%lld",&d2, &y2);
            m2 = bp(a);

            if(m1>2)y1++;
            if(m2<2)y2--;
            else if(m2==2&&d2<29)y2--;

            ll up = (y2/4)-((y2/100)-(y2/400));
            ll down = (y1/4)-((y1/100)-(y1/400));

            if((y1%4==0 && y1%100!=0) || (y1%400==0))down--;

            printf("Case %d: %lld\n", ++cc, up-down);

        }
        return 0;
}
