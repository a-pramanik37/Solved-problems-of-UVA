#include <stdio.h>
int main()
{
    int N, i, j, rem, ara[20];
    while(scanf("%d", &N) != EOF){
        if(N < 0) break;
        i = 0;
        while(N > 0){

            rem = N % 3;
            N = N/3;
            ara[i] = rem;
            i = i + 1;

        }
        for(j = i-1; j >= 0; j--){
            printf("%d", ara[j]);
        }
        printf("\n");
     }
     return 0;
}
