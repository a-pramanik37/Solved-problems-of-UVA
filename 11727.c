#include <stdio.h>

int main()

{
    int a, b, c, T, i;
    scanf("%d", &T);

    for(i = 1; i >= T; i++){
        scanf("%d%d%d", &a, &b, &c);
        if((a>=1000 && a<=10000) && (b>=1000 && b<=10000) && (c >= 1000 && c <= 10000)){
        if(a >= b && a >= c){
            if(b >= c) printf("%d\n", b);
                else if(c >= b) printf("%d\n", c);
        }
        else if(b >= a && b >= c){
            if(a >= c) printf("%d\n", a);
            else if(c >= a) printf("%d\n", c);
        }
        else if(c >= a && c >= b) {
            if(a >= b) printf("%d\n", a);
            else if(b >= a) printf("%d\n", b);
        }
        }
    }

    return 0;
}
