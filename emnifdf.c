#include <stdio.h>
int main()
{
    int n, i, sum;
    while(scanf("%d", &n)==1){
        if(n<1){
            sum = 0;
            for(i = 1; i>=n; i--){
                sum = sum+i;
            }
            printf("%d\n", sum);
        }
        else {
            for(i = 1; i<= n; i++){
                sum = sum+i;
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}
