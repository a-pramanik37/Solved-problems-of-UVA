#include <stdio.h>
int main()
{
    int N, k, c, i, p, b=0;
    while(scanf("%d", &N) != EOF){
            k = 1;
            c = 0;
            b++;
        if(N < 0) break;
        for(i = 1; i <=(N+1); i++){
            c++;

            k =k*2;

            if(N == 0 || N==1){
                p = 0;
                break;
            }
            else if((N > (k/2) && (N < k)) || N==k){
                p = c;
                break;
            }
            else if(k > N){
                p = c;
                break;
            }
        }
        printf("Case %d: %d\n", b, p);
    }
    return 0;
}
