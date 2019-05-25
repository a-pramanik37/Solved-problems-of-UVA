#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define pn printf

int main()

{
    ll n, i, j, k;

    while(scanf("%lld", &n)==1 && n!=0){
        for(i = 1; i<=n; i++)scanf("%lld", &j);

        if(n%2==1) printf("Yes\n");
        else printf("No\n");
    }

}
