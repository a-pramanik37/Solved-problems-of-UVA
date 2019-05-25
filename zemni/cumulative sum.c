#include <stdio.h>
int main()

{
    int n, i, a[1000], sum[10000], l, r;
    scanf("%d", &n);
    for(i = 1; i <=n; i++){
        scanf("%d", &a[i]);
    }
    sum[0] = 0;
    for(i = 1; i <=n; i++){
        sum[i] = a[i]+sum[i-1];
    }
    while(scanf("%d%d", &l, &r)==2){
        printf("%d\n", sum[r]-sum[l-1]);
    }
    return 0;
}
