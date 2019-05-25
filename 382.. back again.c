#include <stdio.h>
int main()
{
    int n, i, j, g=0, sum, bal;
    while(scanf("%d", &n)==1){
            g++;
    if(g==1) printf("PERFECTION OUTPUT\n");
        if(n==0){
            printf("END OF OUTPUT\n");
            break;
        }
        sum = 0;
        for(i = 1; i <= n/2; i++){
            if(n%i==0){
                sum = sum+i;
            }
        }
        if(sum==n) bal=0;
        else if(sum<n) bal = 1;
        else bal = 2;

        if(n<10) printf("    %d  ", n);
        else if(n<100) printf("   %d  ", n);
        else if(n<1000) printf("  %d  ", n);
        else if(n<10000) printf(" %d  ", n);
        else printf("%d  ", n);

        if(bal==0) printf("PERFECT\n");
        else if(bal==1) printf("DEFICIENT\n");
        else printf("ABUNDANT\n");
    }
    return 0;
}
