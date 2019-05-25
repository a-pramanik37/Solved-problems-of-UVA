#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[5];
    int n, i, x, t,sum;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){

            scanf("%4s%d", &a, &x);

       sum = (a[0]-'A')*(26*26)+(a[1]-'A')*26+(a[2]-'A');

       n=abs(sum-x);

       if(n<=100) printf("nice\n");
       else printf("not nice\n");

    }
    return 0;
}
