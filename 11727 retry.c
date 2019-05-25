#include <stdio.h>
int main()
{
    int a, b, c, T, i, d;
    scanf("%d", &T);

    if(T < 20){

    for(i = 1; i <= T; i++){

        scanf("%d%d%d", &a, &b, &c);


    if(a >= 1000 && a <= 10000 && b >=1000 && b <= 10000 && c >= 1000 && c <= 10000){
            if(a > b && a > c){
            if(b > c) d = b;
                else d = c;
        }
        if(b > a && b > c){
            if(a > c) d = a;
            else d = c;
        }
        if(c > a && c > b) {
            if(a > b) d = a;
            else d = b;

        }
        }
        printf("case %d: %d\n", i, d);
    }
    }

    return 0;
}
