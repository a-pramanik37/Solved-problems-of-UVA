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
    int t, n, i, j, k, x, y;

    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &k);
        int sum = 0;

        int sq = sqrt(n);
        for(i=1; i<=sq; i++){

            x = n/i;

            if(x%k!=0 && k!=x && n%i==0){
                sum+=x;
            }
            if(i%k!=0 && i!=k && i!=x && n%i==0){
                sum+=i;
            }

        }
        printf("%d\n", sum);
    }
    return 0;
}
