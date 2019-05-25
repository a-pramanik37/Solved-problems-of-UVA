#include <stdio.h>


int main()


{
    int cd, cm, cy, bd, bm, by, i, t;

    scanf("%d", &t);
    for(i = 1; i <= t; i++){


        scanf("%d/%d/%d", &cd, &cm, &cy);
        scanf("%d/%d/%d", &bd, &bm, &by);

        if(bd>cd){
                cd = cd+30;
            bm = bm+1;
        }
        if(bm>cm){
            cm = cm+12;
        by = by+1;
        }

        if(cy-by<0) printf("Case #%d: Invalid birth date\n", i);
        else if(cy-by>130) printf("Case #%d: Check birth date\n", i);
        else printf("Case #%d: %d\n", i, cy-by);
    }

    return 0;
}
