#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;


long long a[10000005], b[10000005] ;

int main()

{
    long long n, m, i, j, k, coun, p;

    while(scanf("%lld%lld", &n, &m)==2 && n!=0 && m!=0){
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        for(i = 1; i<=n; i++){
            scanf("%lld", &p);
            if(p>=0){
                a[p]++;
            }
            else{
                    p*=-1;
                b[p]++;
            }
        }

        coun = 0;

        for(i = 1; i<=m; i++){
            scanf("%lld", &p);
            if(p>=0){
                if(a[p]>0) coun++;
            }
                else{
                    p*=-1;
                    if(b[p]>0) coun++;
                }

        }
        printf("%lld\n", coun);
    }
    return 0;
}
