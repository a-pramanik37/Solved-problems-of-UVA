#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back

int main()

{
    char a[10000];
    ll i, j, k, s,b;

    while(scanf("%lld%s",&b, a)==2){
        s=0;
        for(i=0; i<strlen(a); i++){
            if(a[i]>=48 && a[i]<=57)s = s*b+a[i]-48;

            else s = s*b+a[i]-55;
        }
        printf("%lld\n",s);
    }
    return 0;
}
