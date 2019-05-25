#include <stdio.h>


int main()

{
    int n, m, c, a[500], sum, max, i, j, x, C = 0 ,flg, b[500];

    while(scanf("%d%d%d", &n, &m, &c)==3){

        if(n==0 && m==0 && c==0) break;
        C++;
        memset(b, 0, sizeof b);
        for(i = 1; i<= n; i++){
            scanf("%d", &a[i]);
        }
        flg = 0;
        sum = 0;
        max = 0;
        for(i = 1; i<=m; i++){
            scanf("%d", &x);
            if(i==1) {
                    sum = sum+a[x];
                    b[x] = a[x];

            }

            else {
                if(b[x]==0){
                    sum = sum+a[x];
                    b[x] = a[x];
                }
                else if(a[x]==b[x]){
                    sum = sum-a[x];
                    b[x] = 0;
                }
            }

            if(sum>c){
                flg = 1;
            }

            if(max<sum) max = sum;

        }

        if(flg==1) printf("Sequence %d\nFuse was blown.\n", C);
        else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n", C, max);

        printf("\n");
    }
    return 0;
}
