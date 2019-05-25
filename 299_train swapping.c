#include <stdio.h>
int main()
{
    int t, n, i, j, k, a[50], T, s;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        s = 0;
        for(j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        for(j = 1; j < n; j++){
            for(k = n-1; k >= j; k--){
                if(a[k-1] > a[k]){
                    T = a[k-1];
                    a[k-1] = a[k];
                    a[k] = T;
                    s++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", s);
    }
    return 0;
}
