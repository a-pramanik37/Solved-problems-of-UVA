#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    while(gets(a)!=EOF){
        gets(b);
        int c = strcmp(a, b);
        if(c==0) printf("string %s & %s both are equal.\n", a, b);
        else if(c==1) printf("string %s is greater than string %s.\n", a, b);
        else if(c==-1) printf("string %s is less than string %s.\n", a, b);
    }
    return 0;
}
