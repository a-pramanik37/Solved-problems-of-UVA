#include <stdio.h>
int a[1000005], store[1000005];
int main()
{
    int i, j, k=1, flg, n;
    for(i = 2; i <= 1000005; i++){
        if(a[i]==0){
            for(j = i*2; j <= 1000005; j = j+i){
                a[j]=1;
            }
        }
        if(a[i]==0){
            store[k]=i;
            k++;
        }

        }

        while(scanf("%d", &n)==1){
                if(n==0) break;
                flg = 0;
            for(i = 1; i <= n; i++){
                if(a[n-store[i]]==0 && store[i]>1 && store[i]!=1 && n-store[i]>1&& store[i]+(n-store[i])==n){
                    printf("%d:\n%d+%d\n", n, store[i], n-store[i]);
                    flg = 1;
                    break;
                }
            }
            if(flg==0) printf("%d:\nNO WAY!\n", n);
        }
        return 0;
}
