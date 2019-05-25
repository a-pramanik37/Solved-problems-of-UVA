#include <stdio.h>
int main()

{
    int a[10], i;

    memset(a, 0, sizeof a);
    a[2] = 1;
    a[4] = 1;
    a[6] = 1;
    a[8] = 1;
    a[10] = 1;

    for(i = 0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
