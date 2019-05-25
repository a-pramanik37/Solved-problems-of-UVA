#include <stdio.h>
int main()
{
    int a[500][500], i, j, row, col, sum;

    while(scanf("%d%d", &row, &col)){

       for(i = 1; i<=row; i++){
        for(j = 1; j<=col; j++){
           scanf("%d", &a[i][j]);
        }
       }

       for(i = 1; i<=col; i++){
            sum = 0;
        for(j = 1; j<= row; j++){
            sum = sum+a[i][j];
        }
       printf("Sum of row %d: %d\n", i, sum);

       }

       printf("\n\n");

       for(i = 1; i<= col; i++){
            sum = 0;
        for(j = 1; j<= row; j++){
            sum = sum+a[j][i];
        }

       printf("Sum of columm %d: %d\n", i, sum);
       }
    }
    return 0;
}
