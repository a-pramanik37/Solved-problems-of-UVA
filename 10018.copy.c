#include <stdio.h>

int main()
{
    long int t, i, n, count, N, sum, j;

    scanf("%ld", &t);
    for(i=1; i<= t; i++){
        scanf("%ld", &n);
        N = n;
        sum = 0;
        while(n>0){

        sum = sum*10+n%10;
        n = n/10;
    }


        count = 0;

        if(sum!=N){
        for(j = 1; j<1000; j++){

               count++;

               n = sum+N;
               N = n;

               sum = 0;

               while(n>0){
                sum = sum*10+n%10;
                n = n/10;
               }

               if(sum==N) break;

        }
        }

        printf("%ld %ld\n", count, N);
    }
    return 0;
}

