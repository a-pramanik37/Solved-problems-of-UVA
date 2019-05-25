#include <stdio.h>
int main()
{
    int T, n, i, c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, j, t;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d", &n);
        c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5= 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
        for(j = 1; j <= n; j++){
                t = j;
            while(t>0){
                if(t%10==0) c0++;
        if(t%10==1) c1++;
        if(t%10==2) c2++;
        if(t%10==3) c3++;
         if(t%10==4) c4++;
         if(t%10==5) c5++;
        if(t%10==6) c6++;
        if(t%10==7) c7++;
         if(t%10==8) c8++;
         if(t%10==9) c9++;

        t = t/10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", c0, c1, c2, c3, c4, c5, c6, c7, c8, c9);
    }
    return 0;
}
