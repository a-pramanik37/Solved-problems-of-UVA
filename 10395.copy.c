#include <stdio.h>
int main()
{
    int n, i, a[100], j, b[50], p;

    while(scanf("%d", &n)==1){
        if(n==0) break;

        if(n==1){
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
        }

        /*else if(n==2){
            printf("Discarded card: 1\n");
            printf("Remaining card: 2\n");
        }*/

        else{
        memset(b, 0, sizeof b);
        printf("Discarded cards:");
        for(i = 1, j = 1; i<= n; i++){
                if(i==1) printf(" %d", i);
            else if(i%2==1) printf(", %d", i);
            else{
                b[j] = i;
                j++;
            }
        }




        if(n%2==1){
                memset(a, 0, sizeof a);
            while(j>2){
                    memset(a, 0, sizeof a);
                 p = j-1;
            for(i=1, j = 1; i<=p; i++){
                if(i%2==1){
                    a[j] = b[i];
                    j++;
                }
                else printf(", %d", b[i]);
            }


            memset(b, 0, sizeof b);

            if(j==2) break;

            p = j-1;
            for(i = 1, j=1; i<=p; i++){
                if(i%2==1){
                    printf(", %d", a[i]);
                }
                else {
                        b[j] = a[i];
                    j++;
                }
            }

        }
        printf("\nRemaining card: ");
        if(b[1]==0) printf("%d\n", a[1]);
        else printf("%d\n", b[1]);
        }

        else {
                memset(a, 0, sizeof a);
            while(j>2){

                 p = j-1;
            for(i=1, j = 1; i<=p; i++){
                if(i%2==0){
                    a[j] = b[i];
                    j++;
                }
                else printf(", %d", b[i]);
            }

            memset(b, 0, sizeof b);

            if(j==2) break;

            p = j-1;
            for(i = 1, j=1; i<=p; i++){
                if(i%2==0){
                    printf(", %d", a[i]);
                }
                else {
                        b[j] = a[i];
                    j++;
                }
            }
            memset(a, 0, sizeof a);
        }
        printf("\nRemaining card: ");
        if(b[1]==0) printf("%d\n", a[1]);
        else printf("%d\n", b[1]);
        }


    }
    }
    return 0;
}

