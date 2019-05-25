#include <stdio.h>
int main()
{
    int n;
    for(n = 2; n < 10; n++){
        if(n % 2 == 0){
            continue;
            }
            printf("%d\n", n);
        }
        return 0;
}
