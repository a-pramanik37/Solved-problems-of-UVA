#include <stdio.h>
int main()
{

    long long i, m, N;
    while(scanf("%lld", &N) <= 210000000){
            m = 0;
    for(i =1; i <= N; i++){
       m = m + i;
    }
    if(N < 0) break;
    printf("%lld\n", m + 1);

    }
    return 0;
}
