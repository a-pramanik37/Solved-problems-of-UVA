#include <stdio.h>
int main()
{
    int n, k, m;
    scanf("%d%d", &n, &k);
    m = ((k*(k+1))/2 -(n*(n+1))/2)+n;
    printf("%d\n", m);
    return 0;
}
