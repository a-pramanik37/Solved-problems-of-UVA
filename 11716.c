#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[20000], b[20000];

    int t, i, col, len, j, p, k;

    scanf("%d ", &t);
    for(i = 1; i <= t; i++){
        gets(b);
        len = strlen(b);

        col = sqrt(len);



        for(j = 0, k=1; j<len; j++){
            a[k] = b[j];
            k++;
        }
        a[k] = '\0';




        if(col*col!=len) printf("INVALID\n");

        else{
                for(j = 1; j <= col; j++){
            for(p = 0; p<col; p++){
                printf("%c", a[(p*col)+j]);
            }
        }
        printf("\n");
    }
    }
    return 0;
}
