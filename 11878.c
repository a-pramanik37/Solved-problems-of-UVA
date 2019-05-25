#include <stdio.h>
int main()
{
    int a, b, c, count, i;
    char p, q, x;
    while(scanf("%d%c%d %c%d\n", &a, &p, &b, &q, &c)){

        count = 0;
        if(p=='+'){
         if(a+b==c) count++;
        }
        else  if(p=='-'){
            if(a-b==c) count++;
        }
        for(i = 1; i<= 3; i++){
            scanf("%d%c%d %c %d%c", &a, &p, &b, &q, &c, &x);

            if(p=='+'){
                    if(a+b==c) count++;
            }
            else  if(p=='-'){
             if(a-b==c) count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
