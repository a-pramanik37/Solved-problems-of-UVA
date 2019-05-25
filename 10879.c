#include <stdio.h>
#include <math.h>
int main()
{
    long int t, n, a, b, c, d, count, N, i, j;

    scanf("%ld", &t);
    for(i = 1; i <= t; i++){
        scanf("%ld", &n);
        N = n;
        count = 0;
        for(j = 2; j<=sqrt(n); j++){
            if(n%j==0){
                 c = j;
                d = n/j;
                    count++;

            if(count>1) break;

                a = c;
                b = d;

            }


        }

        printf("Case #%ld: %ld = %ld * %d = %ld * %ld\n", i, N, a, b, c, d);
    }
    return 0;
}
