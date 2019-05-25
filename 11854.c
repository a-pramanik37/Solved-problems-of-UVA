#include <stdio.h>
int main()
{
    int a, b, c;

    while(scanf("%d%d%d", &a, &b, &c)== 3){

        if((a > b && b > c) ||(a > c && c > b)){
            if((b*b) + (c*c) ==a*a) printf("right\n");
            else printf("wrong\n");
        }

        else if((b > a && a > c) || (b > c && c > a)){
            if((a*a) + (c*c) ==b*b) printf("right\n");
            else printf("wrong\n");
        }

        else if((c > a && a > b) || (c > b && b > a)){
            if((a*a) + (b*b) ==c*c) printf("right\n");
            else printf("wrong\n");

        }

    }
    return 0;
}
