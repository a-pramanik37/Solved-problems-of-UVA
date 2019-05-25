#include <stdio.h>
int main()
{
    int i, c = 0;
    for(i = 1; i <=150; i++){
            c++;
        if((i%2==0) || (i%3==0) || (i%5==0)){
            printf("The %d'th ugly number is %d\n", c, i);
        }
    }
    return 0;
}
