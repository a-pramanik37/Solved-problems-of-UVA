#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    while(gets(a)!=EOF){
        strrev(a);
        printf("%s\n", a);
    }
    return 0;
}
