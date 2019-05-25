#include <stdio.h>
int main()
{
    int i, n,j, sum=0;
    scanf("%d%d", &i, &n);
    for(j = i; j <= n; j++){
    sum = sum +j;
    }
    printf("%d\n", sum);
    return 0;
}
