#include <stdio.h>
#include <string.h>

int main()

{
    int i, j, k, b[200], t, n, sum, x, p;

    char a[500];

    scanf("%d", &t);

    for(i = 1; i<=t; i++){
        scanf("%d ", &n);
        memset(b, 0, sizeof b);

        sum = 0;
        for(j = 1; j<=n; j++){

            gets(a);

            if(strcmp(a, "LEFT")==0){
                     b[j] = 0;
                sum = sum-1;

            }

            else if(strcmp(a, "RIGHT")==0){
                b[j] = 1;

                sum = sum+1;
            }

            else{
                if(strlen(a)==9){
                    if(b[a[8]-48]==0){
                        sum = sum-1;
                        b[j]=0;
                    }
                    else {
                            sum = sum+1;
                            b[j] = 1;
                    }
                }
                else if(strlen(a)==10){
                        p = (a[8]-48)*10+(a[9]-48);
                    if(b[p]==0) {
                            sum = sum-1;
                    b[j] = 0;
                    }
                    else{
                        sum = sum+1;
                        b[j] = 1;
                    }
                }
            }

        }

        printf("%d\n", sum);
    }
    return 0;
}
