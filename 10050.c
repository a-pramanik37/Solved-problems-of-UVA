#include <stdio.h>
#include <string.h>
int n;
int main()
{
    long int t, p, i, j, k, x, a[5000], count;

    scanf("%ld", &t);

    for(i = 1; i<= t; i++){
        scanf("%ld", &n);

        memset(a, 0, sizeof a);

        scanf("%ld", &p);
        for(j = 1; j<= p; j++){
            scanf("%ld", &x);

            for(k = 0; k<n; k++){
                if(k%x==(x-1)){
                    a[k] = 1;
                }
            }
        }
        count = 0;
        for(k = 0; k<n; k++){
            if((k%7==6 || k%7==5)) count = count;

            else{
                if(a[k]==1) count++;
            }
        }
        printf("%ld\n", count);
    }
    return 0;
}
