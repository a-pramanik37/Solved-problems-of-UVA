#include <stdio.h>
int a[20000005], store[1000000];
int main()
{
    int i, j, k, n;
    for(i = 2; i <= 20000005; i++){
        if(a[i]==0){
            for(j = i*2; j <= 20000005; j = j+i){
                a[j]=1;
            }
        }
    }
    for(i = 2, k= 1; i <= 20000005; i++){
        if(a[i]==0 && a[i+2]==0){
            store[k] = i;
            k++;
        }
    }
    while(scanf("%d", &n)==1){
        printf("(%d, %d)\n", store[n], store[n]+2);
    }
    return 0;
}
