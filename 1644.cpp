#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

#define LL long long int
#define uLL unsigned long long int
#define s1(a) scanf("%d",&a)
#define s2(a,b) scanf("d",&a,&b)
#define s3(a,b,c) scanf("d%d",&a,&b,&c)
#define sLL1(a) scanf("%lld",&a)
#define sLL2(a,b) scanf("lld",&a,&b)
#define sLL3(a,b,c) scanf("lld%lld",&a,&b,&c)
#define mem0(a) memset(a, 0, sizeof a)
#define mem1(a) memset(a, -1, sizeof a)
#define sc(a) scanf("%c",&a)
#define p(a) printf("%d",a)
#define pLL(a) printf("%lld\n",a)
#define ps(a) printf("%s\n", a)
#define pb push_back
#define casep(cc) printf("Case %d:",cc++)
#define pn printf("\n")
#define pi (2.0*acos(0.0))
#define mx 1299714
int a[mx];
int main()

{
    int i, j, k, n, p, q;
    a[0]=1;
    a[1] = 1;
    for(i=2; i<=mx; i++){
        if(a[i]==0){
            for(j = i*2; j<=mx; j+=i){
                a[j]=1;
            }
        }
    }

    while(scanf("%d", &n)==1&&n!=0){

        if(a[n]==0) printf("0\n");
        else{
            for(i = n-1; ; i--){
                if(a[i]==0){
                    p = i;
                    break;
                }
            }
            for(i=n+1; ;i++){
                if(a[i]==0){
                    q = i;
                    break;
                }
            }
            p(q-p);pn;
        }

    }
    return 0;
}
