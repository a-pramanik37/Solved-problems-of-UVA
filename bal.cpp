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

    for(int i=1; i<=6; i++){
            int p = sqrt(i);
        if(p*p==i)printf("%d ",i);
    }
    printf("\n");

    return 0;
}
