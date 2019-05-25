#include <stdio.h>
#include <string.h>
int main()
{
    char a[5000];
    int t, len, i, j,k, sum, count;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){

            scanf("%s", &a);

    len = strlen(a);

    printf("Case %d: ", i);

    sum = 0;
    count = 0;

   for(j = 0; j<=len; j++){
    if(a[j]>=48 && a[j]<=57){
            count++;
        sum = sum*10+(a[j]-48);
        }

        if((a[j]>=65 && a[j]<=90) || a[j]=='\0'){
            for(k = 1; k<= sum; k++){
                printf("%c", a[j-(count+1)]);
            }
            sum = 0;
            count = 0;
        }
    }

   printf("\n");
    }
    return 0;
}
