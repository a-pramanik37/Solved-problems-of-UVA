#include <stdio.h>
int main()
{
    int t, n, p, q, i, j, k, temp, a[50], sum, count;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d%d%d", &n, &p, &q);
        for(j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        for(j = 1; j < n; j++){
            for(k = n-1; k>=j; k--){
                if(a[k-1]>a[k]){
                    temp = a[k-1];
                    a[k-1]=a[k];
                    a[k] = temp;
                }
            }
        }
        sum = 0, count = 1;
            for(temp = 0; temp < n; temp++){
                sum = sum+a[temp];

                if(count>p) break;
                if(sum<=q) count++;
            }
        printf("Case %d: %d\n", i, count-1);
    }
    return 0;
}
