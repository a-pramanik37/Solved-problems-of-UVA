#include <stdio.h>
int main()
{
    int n, i = 0, ara[100], j, sum, count, avg;
    while(scanf("%d", &n)==1){
        i++;
        count = 0;
        sum = 0;
        if(n==0) break;
    for(j = 0; j < n; j++){
        scanf("%d", &ara[j]);
        sum = sum + ara[j];
    }
    avg = sum/n;
    for(j = 0; j < n; j++){
        if(ara[j] > avg){
            count = count+(ara[j]-avg);
        }
    }
    printf("Set #%d\n", i);
    printf("The minimum number of moves is %d.\n\n", count);
    }
    return 0;
}
