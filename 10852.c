#include <stdio.h>
int a[10005], store[10005];
int main()
{
   int i, j, n, x, k, p, t, ans, m;
    for(i = 2; i <=10005; i++){
        if(a[i]==0){
            for(j = i*2; j <= 10005; j = j+i){
                a[j]=1;
            }
        }
    }
    for(i = 2, k=1; i <= 10005; i++){
        if(a[i]==0){
            store[k]=i;
            k++;
        }
    }
    scanf("%d", &t);
    for(m = 1; m <= t; m++){
        scanf("%d", &n);
        p = 1;
        while(store[p]*2<=n){
            p++;
        }
        printf("%d\n", store[p]);

        }

    return 0;
}
