#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, i, flg, count, j, k, I, p;

    char a[9000];

    while(scanf("%d%d", &n, &m)==2){
            count = 0;
        for(i = n; i<=m; i++){
                I = i;
                p = 0;
            while(I>0){
                a[p] =(I%10)+48;
                I = I/10;
                p++;
            }
            a[p] = '\0';

            flg = 0;
        for(j = 0; j<strlen(a); j++){
            for(k = 0; k<strlen(a); k++){
                if(j!=k && a[j]==a[k]){
                    flg=1;
                    break;
                }
            }

        }
        if(flg==0) count++;
        }

        printf("%d\n", count);
    }
    return 0;
}
