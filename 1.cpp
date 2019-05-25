#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009

int main()

{
        int t, a, b;
        scanf("%d", &t);

        while(t--){
            scanf("%d%d", &a, &b);
            printf("%d %d %d\n", a+b,a-b,a*b);
        }
        return 0;
}
