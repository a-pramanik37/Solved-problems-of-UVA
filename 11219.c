#include <stdio.h>
int main()

{
    int T, d1, m1, y1, d2, m2, y2, i;
    scanf("%d", &T);
    printf("\n");
    for(i = 1; i <= T; i++){
     scanf("%d%d%d%d%d%d", &d1, &m1, &y1, &d2, &m2, &y2);


     if(m1 == m2) printf("Case %d: 0\n", i);

     else if(y2 >= y1){
        if(y2 > y1) printf("Case %d: Invalid birth date\n", i);

        else{
            if(m1-m2<0) printf("Case %d: Invalid birth date\n", i);
            else if(m1-m2>0) printf("Case %d: 0\n", i);
        }
     }

     else if(y1 > y2){

        if(y1-y2 <=130) printf("Case %d: %d\n", i, y1-y2);
        else printf("Case %d: Check birth date\n", i);

     }
    }
    return 0;
}
