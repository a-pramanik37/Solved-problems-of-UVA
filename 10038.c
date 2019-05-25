#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, a[5000], b[5000], j, flg, f, c[5000];

    while(scanf("%d", &n)==1){
        for(i = 1, j = 1; i<= n; i++){
            scanf("%d", &a[i]);
            if(i<n) c[i] = i;
            if(i!=1){
                b[j] = abs(a[i]-a[i-1]);
                j++;
            }
        }


        f = 0;
        for(i = 1; i<n; i++){
                flg = 0;
            for(j = 1; j<n; j++){
                if(c[i]==b[j]){
                    flg = 1;
                }
            }
            if(flg==0){
                f=1;
                break;
            }
        }

        if(f==0) printf("Jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
