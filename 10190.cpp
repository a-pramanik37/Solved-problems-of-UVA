#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
long long a[20000005];
int main()

{

    long long n, m, i, j, k, flg, f;

    while(scanf("%lld%lld", &n, &m)!=EOF){
        i = 1;
        a[0]=n;


        if( m <2 || n < 2 || m>n){

       printf("Boring!\n");
        }

        else{
                flg = 0;
        while(n!=1){

          if(n%m==0){
                a[i] = n/m;
                n/=m;
                i++;
              }
              else{
                flg = 1;
                break;
              }
        }
        if(flg==0){
            for(j =  0; j<i; j++){
                if(j==0) printf("%lld", a[j]);
                else printf(" %lld", a[j]);
            }
            printf("\n");

        }
        else printf("Boring!\n");
        }
    }
    return 0;
}
