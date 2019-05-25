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
        int t, a, c, b, i, j, p, q;
        scanf("%d", &t);

        while(t--)
        {
            scanf("%d%d", &a, &c);
            if(c%a!=0)printf("NO SOLUTION\n");

            else{
                b = c/a;
                q = 1;

                while(q<__gcd(b*q, a))q = __gcd(b*q, a);

                printf("%d\n", q*b);
            }
        }
        return 0;
}
