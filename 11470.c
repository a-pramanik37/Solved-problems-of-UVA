#include <stdio.h>
int main()
{
    int a[50][50], b[100], row, col, p, n, loop, j,i, c=0, sum;

    while(scanf("%d", &n)==1){
            c++;
        for(i = 1; i<=n; i++){
            for(j=1; j<=n; j++){
                scanf("%d", &a[i][j]);
            }
        }

        if(n%2==0) loop = n/2;

        else loop = (n/2)+1;

        p=0;
        i = 1;

        while(i<=loop){
            sum = 0;
            row = i;



            for(col = 1+p; col<n; col++){
                sum = sum+a[row][col];
            }

            col = n;

            for(row = 1+p; row<n; row++){
                sum = sum+a[row][col];
            }

            row = n;
            for(col = n-p; col>1; col--){
                sum = sum+a[row][col];
            }

            col = i;

            for(row = n-p; row>1; row--){
                sum =sum+a[row][col];
            }

            b[p] = sum;
            i++;
            n--;
    p++;


        }

        printf("Case %d: ", c);

        for(i = 0; i<p; i++){
            if(i==0) printf("%d", b[i]);
            else printf("% d", b[i]);
        }
        printf("\n");

    }
    return 0;
}
