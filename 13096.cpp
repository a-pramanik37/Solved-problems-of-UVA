//-_-
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
    ll i, j, k, n;
    double m;

    while(scanf("%lld", &n)==1 && n!=0){

        double sum=0;

        m = n/2;

        if((ll)n%2==0){
            sum = (m*(2.0*m+1)*(2.0*m-1))/3.0;
        }
        else{
            sum=(2.0*m*(m+1)*(2.0*m+1))/3.0;
        }

        sum*=(2.0);
        sum = sum/(n-1.0);
        sum = sqrt(sum);
        printf("%6lf\n", sum);
    }
    return 0;
}

