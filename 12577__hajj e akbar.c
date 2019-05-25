#include <stdio.h>
int main()
{
    char ara[6];
    int len, i = 0;
    while(gets(ara) != EOF){
            i++;
        if(ara[0] =='*') break;
        len = strlen(ara);
        if(len == 4){
            printf("Case %d: Hajj-e-Akbar\n", i);
        }
    else{
        printf("Case %d: Hajj-e-Asghar\n", i);
    }
    }
    return 0;
}
