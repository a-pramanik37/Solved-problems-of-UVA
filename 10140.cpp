#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

long long int a[100007];

int main()

{

    long long l, u, i, j, k, maxx, minn, x, b[100005], c1, c2, d1, d2, p;

    while(scanf("%lld%lld", &l, &u)==2){
            memset(a, 0, sizeof a);

        for(i = l, p = 2, x = 0; i<=u; i++, p++){
            if(a[i]==0){
                for(j = i*p; j<=u; j = j+p){
                    a[j] = 1;
                    b[x] = j;
                    x++;
                }
            }
        }



       if((x-1)<2) printf("There are no adjacent primes.\n");

       else {

            minn = 2147483649;
            maxx = 0;

       for(i = 1; i<=(x-1); i++){
         if((b[i]-b[i-1])>maxx){
            d1 = b[i];
            d2 = b[i-1];
         }
         if((b[i]-b[i-1])<minn){
            c1 = b[i];
            c2 = b[i-1];
         }
       }

       printf("%lld,%lld are closest, %lld,%lld are most distant.\n", c1, c2, d1, d2);
       }
    }

    return 0;

}
