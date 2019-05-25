#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[200000], i, j, max, min, n, ans, val, p, min1;

    while(scanf("%d", &n)==1){
        for(i =1; i<= n; i++){
            scanf("%d", &a[i]);
        }
        min1 = 30005;

        for(i = 1; i<n; i++){

                 max = 0;
        min = 30002;

            for(j = i+1; j<=n; j++){
                 p = a[i]-a[j];
                     val = abs(p);
                if(val>=max) max = val;
                if(val<=min) min = val;
            }

        if((max-min)<min1) {
                min1 = max-min;
                ans = a[i];
        }
        }



        for(i = n; i>1; i--){
                max = 0;
        min = 30002;

             for(j = i-1; j>=1; j--){
            p = a[i]-a[j];
            val = abs(p);
            if(val>=max) max = val;
            if(val<=min) min = val;
        }
        if((max-min)<min1) {
                min1 = max-min;
                ans = a[i];
        }
        }

        printf("%d\n", ans);
    }
    return 0;
}
