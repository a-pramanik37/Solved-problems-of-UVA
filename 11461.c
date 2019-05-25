#include <stdio.h>
int main()
{
    int a, b, i, x, c;
    while(scanf("%d%d", &a, &b) != 202){
            if(a == 0 && b == 0) break;
        c= 0;
        for(i = a; i <= b; i++){
            x = sqrt(i);
            if(x * x == i){
                c = c +1;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
