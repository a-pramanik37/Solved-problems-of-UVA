#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, a[10000], count, temp;
    while(scanf("%d", &n) ==1){
            count = 0;
        for(i= 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(i = 1; i < n; i++){
            for(j = n-1; j >= i; j--){
                if(a[j-1] > a[j]){
                        temp = a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
                    count++;
                }
            }
        }

        for(i = 0; i<n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    /*printf("Minimum exchange operations : %d\n", count);*/
    }
    return 0;
}
