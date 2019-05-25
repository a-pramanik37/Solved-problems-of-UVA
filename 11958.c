#include <stdio.h>
int main()
{
    int t, k, h1, m1, h2, m2, min, i, time, toty, j;

    scanf("%d", &t);


    for(i = 1; i <= t; i++){


        scanf("%d%d:%d", &k, &h1, &m1);
        min = 99999999;
        for(j = 1; j<= k; j++){


            scanf("%d:%d%d", &h2, &m2, &time);
            if(m2<m1){
                m2 = m2+60;
                h2 = h2-1;

            }

            if(h2<h1){
                h2 = h2+24;

            }
            toty = (h2-h1)*60+(m2-m1)+time;

            if(toty<min) min = toty;

        }

        printf("Case %d: %d\n",i, min);
    }
    return 0;
}
