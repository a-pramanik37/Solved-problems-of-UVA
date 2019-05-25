#include <bits/stdc++.h>
using namespace std;
int main()

{
    long  long t, n, N, rem, i, sum, c, p, gun, j;
    scanf("%lld", &t);
    for(i = 1; i <= t; i++){
        scanf("%lld", &n);
        N= n;
        p = n;
        c = 0;
        while(n>0){
            rem =n%10;
           n = n/10;
           c++;
        }
        sum = 0;
        while(N>0){
            rem = N%10;
            gun = 1;
            for(j = 1; j<=c; j++){
                gun = gun*rem;
            }
            sum = sum+gun;
            N = N/10;
        }
        if(sum==p) printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
