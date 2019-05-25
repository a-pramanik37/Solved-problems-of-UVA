#include <stdio.h>
int main()
{
    long long n, i, sum , count, rem, j, a[90000];
    while(scanf("%lld", &n)==1){
        if(n==0) break;
        sum = 0;
        i = 0;
        count = 0;
        while(n >0){
            rem =n%2;
            n = n/2;
           a[i]=rem;
           i++;
        }
        for(j = i-1; j >=0; j--){
            if(a[j]==1) count++;
        }

        printf("The parity of ");
        for(j = i-1; j>=0; j--){
            printf("%lld", a[j]);
        }

        printf(" is %lld (mod 2).\n", count);
    }
    return 0;
}
