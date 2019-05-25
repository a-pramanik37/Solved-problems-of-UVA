#include <stdio.h>
int main()
{
    int N,i, x, c;
    while(scanf("%d", &N) != EOF){

            c = 0;
            if(N==0) break;
            for(i = N; i >=1; i--){


                    c = c+(i*i);

            }
            printf("%d\n", c);
    }
    return 0;
}
