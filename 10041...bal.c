#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[200000], i, j, n, ans, val, p, min1, sum, t, k;

        scanf("%d", &t);
    for(k = 1; k<=t; k++){
            scanf("%d", &n);
        for(i =1; i<= n; i++){
            scanf("%d", &a[i]);
        }
        if(n==1) printf("%d\n", a[1]);

        else{
                min1 = 30005;


        for(i = 1; i<n; i++){
                sum = 0;

            for(j = i+1; j<=n; j++){
                 p = a[i]-a[j];
                     val = abs(p);
                sum = sum+val;

        }
         for(j = i-1; j>=1; j--){
            p = a[i]-a[j];
            val = abs(p);

            sum = sum+val;
        }
        if(sum<=min1){
            min1 = sum;

        }

        }


        printf("%d\n", min1);
    }
    }
    return 0;
}

