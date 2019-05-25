#include <stdio.h>
int main()
{
    int t, n, i, x, y, z;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        x = (((((n*567)/9)+7492)*235)/47)-498;
        if(x < 0){
            x = x * (-1);
            y = x/10;
            z = y%10;
        }
        else{
        y = x/10;
        z = y%10;
        }
        printf("%d\n", z);
    }
    return 0;
}
