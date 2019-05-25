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

ll fact(ll n){
        ll p=1, x;
        for(x=2; x<=n; x++)p*=x;
        return p;
}
ll n;
int main()

{
        while(scanf("%lld", &n)==1){
            if(n<0){
                if(n%2==0)printf("Underflow!\n");
                else printf("Overflow!\n");
            }
            else if(n>13)printf("Overflow!\n");
            else if(n<8)printf("Underflow!\n");
            else printf("%lld\n", fact(n));
        }
        return 0;
}
