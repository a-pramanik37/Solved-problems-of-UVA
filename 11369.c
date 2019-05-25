#include <stdio.h>
int main()
{
    int t, n, i, j ,k, a[40000], p, sum;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        for(j = 0; j <n; j++){
            scanf("%d", &a[j]);
        }
        for(j = 1; j < n; j++){
            for(k = n-1; k>=j; k--){
                if(a[k-1]<a[k]){
                    p = a[k-1];
                    a[k-1]=a[k];
                    a[k]=p;
                }
            }
        }
        sum = 0;
        for(p = 2; p< n; p=p+3){
          sum = sum+a[p];
        }
        printf("%d\n", sum);
    }
    return 0;
}
