#include <stdio.h>
int main()

{
     double N, M, i, j, mul, fact, k;
    while(scanf("%lf%lf", &N,&M) == 2){
            if(N==0 && M==0) break;
            mul = 1;
            fact = 1;
            k = N-M;

            for(i = k+1; i <= N; i++){
                mul = mul*i;
            }
            for(j = M; j > 0; j--){
                fact = fact*j;
            }
            printf("%.lf things taken %.lf at a time is %.lf exactly.\n", N, M, mul/fact);

    }
    return 0;
}
