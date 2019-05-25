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
ll a[44];
ll bp(ll a, ll b){
    ll ans = 1, c;
    for(c=1; c<=b; c++){
        ans = ans*a;
    }
    return ans;
}
int main()

{
    ll t, i, j, k, p, q, x;

    scanf("%lld", &t);

    while(t--){


        for(i = 1; ; i++){
            scanf("%lld", &x);
            if(x==0)break;

            else a[i] = x;

        }
        sort(a+1, a+1+i-1, greater <ll> ());
        ll sum = 0;
        k = 1;
        for(j=1; j<i;j++){
            sum+=2*bp(a[j],k);
            k++;
            /*printf("%lld %lld\n", a[j],sum);*/
        }
        if(sum>5000000)printf("Too expensive\n");
        else printf("%lld\n",sum);
    }
    return 0;
}
