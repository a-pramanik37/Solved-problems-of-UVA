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
        int t, n, m, k;
        scanf("%d", &t);

        while(t--){
            scanf("%d%d%d", &n, &m, &k);
            int p=k-1;
            for(int i=(p*m)+1; i<=(k*m); i++)printf("%d ",i);
            printf("\n");
        }
        return 0;
}
