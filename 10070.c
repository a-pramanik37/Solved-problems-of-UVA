#include <stdio.h>
int main()

{
    int n;
    while(scanf("%d", &n) != EOF)
    {   printf("\n");

        if((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
        {
            printf("This is leap Year.\n");
        }

        if(n % 15 == 0)
        {
            printf("This is huluculu festival year.\n");

        }
        if(((n%4==0) && (n%100 != 0) || (n%400==0)) && (n%55==0))
        {
            printf("This is bulukulu festival year.\n");

        }
        if((n%4!=0) && (n %15 != 0))  printf("This is an ordinary year.\n");

    }


    return 0;
}
