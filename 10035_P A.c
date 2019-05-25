#include <stdio.h>
int main()
{
    long int a, b, c;
    while(scanf("%ld%ld", &a, &b) ==2){
        c = 0;
        if(a==0 && b==0) break;
        while(a > 0 || b > 0){
            if((a%10)+(b%10) > 9){
                c++;
            }
            a = a/10;
            b = b/10;
        }
        if(c ==1) printf("%ld carry operation.\n", c);
        else if(c > 0 && c!=1) printf("%ld carry operations.\n", c);
        else printf("No carry operation.\n");
    }
    return 0;
}
