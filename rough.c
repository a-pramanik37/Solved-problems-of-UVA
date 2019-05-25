#include <stdio.h>
int main()
{
    int a, b, c, T, i, p;
    scanf("%d", &T);
    p = 0;

    for(i = 1; i <= T; i++){
    for(i = 1; i <= T; i++){

        scanf("%d%d%d", &a, &b, &c);
        p++;
      }

      if(a >= 1000 && a <= 10000 && b >=1000 && b <= 10000 && c >= 1000 && c <= 10000){
            if(a > b && a > c){
            if(b > c) printf("case %d: %d\n", p, b);
                else if(c > b) printf("case %d: %d\n", p, c);
        }
        else if(b > a && b > c){
            if(a > c) printf("case %d: %d\n", p, a);
            else if(c > a) printf("case %d: %d\n", p, c);
        }
        else if(c > a && c > b) {
            if(a > b) printf("case %d: %d\n", p, a);
            else if(b > a) printf("case %d: %d\n", p, b);

        }


        }
    }
    return 0;
}
