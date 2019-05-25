#include <stdio.h>
int rev_ad(long int n)
{
    long int sum = 0;

    while(n>0){

        sum = sum*10+n%10;
        n = n/10;
    }
    return sum;
}


int main()
{
    long int t, i, n, count, N, S, s;

    scanf("%ld", &t);
    for(i=1; i<= t; i++){
        scanf("%ld", &n);

        N = n+rev_ad(n);
        count = 0;
        while(N!=rev_ad(N)){
                count++;
            n = N;
            N = n+rev_ad(n);
        }

        printf("%ld %ld\n", count, N);
    }
    return 0;
}
