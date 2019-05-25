#include <stdio.h>
int main()
{
    int N, a;
    while(scanf("%d", &N) ==1){
            if(N==0) break;
        if(N >=101){
            a = N-10;
        }
        else a = 91;
        printf("f91(%d) = %d\n", N, a);

        }
    return 0;
}
