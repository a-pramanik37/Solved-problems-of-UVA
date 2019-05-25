#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int n, i, sum, j, len, flg, p;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
      scanf("%s", &a);

        len = strlen(a);
        p = 1;
        sum = 0;
        flg = 1;
        for(j = 0; j <len; j++){
            if(a[j]=='O'){
                sum = sum+p;
                flg = 1;
            }
            if(a[j]!='O'){
                flg = 0;
                p=1;
            }

            if(flg==1){
                p++;
            }
        }

        printf("%d\n", sum);

    }
    return 0;
}
