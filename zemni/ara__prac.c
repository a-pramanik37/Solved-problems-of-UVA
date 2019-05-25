#include <stdio.h>
int main()
{
    int ara1[50], ara2[20], n, i, m, j, sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d", &ara1[i]);

    }
    scanf("%d", &m);

    for(j = 1; j <= m; j++){
        scanf("%d", &ara2[j]);
        j=i;
        ara1[j] =ara2[i];
        sum = sum + ara1[i];
    }
    printf("%d\n", sum);

    return 0;
}
