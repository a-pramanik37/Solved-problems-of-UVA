#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, t;
    char a[2000000];
    while(scanf("%d", &n)==1){
            if(n==0) break;
        for(i = 0; i < n; i++){
            scanf("%c", &a[i]);
        }
        for(i = 1; i < n; i++){
            for(j = n-1; j>= i; j--){
                if(a[j-1]>a[j]){
                    t = a[j-1];
                    a[j-1]=a[j];
                    a[j]=t;
                }
            }
        }
        for(t = 0; t < n; t++){
            printf("%d ", a[t]);
        }
        printf("\n");
    }
    return 0;
}
