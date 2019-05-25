#include <stdio.h>
int main()
{
    int a[20000], b[20000], i, count, j, n, flg;

    while(scanf("%d", &n)==1 && n!=0){
        scanf("%d",&n);

        for(i = 1; i<=n; i++){
            scanf("%d%d", &a[i], &b[i]);
        }
        count = 0;
        for(i = 1; i<=n; i++){

                flg = 0;
            for(j = 1; j<=n; j++){
                if(a[i]==b[j]){
                    flg = 1;
                }
            }

            if(flg==1){
                count++;
                flg=0;
            }
        }

        if(count>=n) printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");
    }
    return 0;
}
