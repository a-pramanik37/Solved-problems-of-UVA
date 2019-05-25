#include <stdio.h>

int a[1000005], store[1000005];
int main()
{
    int i, j, k=1, n, max, p, a1, b, flg;
    for(i = 2; i <= 1000005; i++){
        if(a[i]==0){
            for(j = i*2; j <= 1000005; j = j+i){
                a[j]=1;
            }
        }
        if(i!=0 && i!=1 && a[i]==0){
            store[k]=i;
            k++;
        }

    }






    while(scanf("%d", &n)==1){
            if(n==0) break;
            flg = 0;
        for(k = 1; k <n; k++){
            if(a[(n-store[k])]==0 && store[k]+(n-store[k])==n){
                printf("%d = %d + %d\n", n, store[k], n-store[k]);
               flg = 1;
    break;
            }

        }
       if(flg==0) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
