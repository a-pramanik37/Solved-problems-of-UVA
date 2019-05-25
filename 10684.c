#include <stdio.h>
int main()
{
    int n, i, a[50000], j,sum, max;

    while(scanf("%d", &n)==1 && n!=0){
        for(i = 1; i<=n; i++){
            scanf("%d", &a[i]);
        }
        a[i] = -1;
        sum = 0;
        max = -1000;

        for(i = 0; i<=(n+1); i++){
            if(a[i]>0){
                sum = sum+a[i];
            }

            if(a[i]<0){
                if(sum>max) max = sum;

                sum = 0;
            }
        }

        if(max>0) printf("The maximum winning streak is %d.\n", max);
        else printf("Losing streak.\n");
    }
    return 0;
}
