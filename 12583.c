#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[1000], br[1000];
    int b[550], i, t, n, K, j, count, k, flg, p;

    scanf("%d", &t);
    for(i = 1; i<=t; i++){

        scanf("%d%d", &n, &K);
        scanf("%s", &a);

        memset(b, 0, sizeof b);
        memset(br, '0', strlen(a));
        br[strlen(a)] = '\0';

        count = 0;


    for(j = 0; j<strlen(a); j++){

        for(k = 0; k<strlen(a); k++){
            if(b[k]>=K) br[k]='0';
        }

            if(j>0){

                    flg = 0;
            for(p = j-K; p<=j; p++){
            if(a[j]==br[p]){
                flg = 1;
                break;
            }
        }


        if(flg == 1) count++;

        }


        br[j] = a[j];
        b[j]++;


    }

    printf("Case %d: %d\n",i, count);
    }
    return 0;
}
