#include <stdio.h>
int main()
{
    long  s, d, i, a, b;

    while(scanf("%ld%ld", &s, &d)==2){
            a=0;
        for(i = s; ;i++){
            b = a;
            a =a+i;
    if(d>= b && d<=a){
        printf("%ld\n", i);
        break;
    }
        }
    }
    return 0;
}
