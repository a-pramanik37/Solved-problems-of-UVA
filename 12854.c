#include <stdio.h>

int main()
{
    int a[50000], b[5000], i, flg, n;

    while(scanf("%d",&n)==1){

        a[1] = n;

        for(i = 2; i <=5; i++){
            scanf("%d", &a[i]);
        }
        for(i = 1; i <=5; i++){
            scanf("%d", &b[i]);
        }

        flg = 0;
        for(i = 1; i <=5; i++){

            if(a[i]==b[i]){
                flg = 1;
                break;
            }
        }

        if(flg==0) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
