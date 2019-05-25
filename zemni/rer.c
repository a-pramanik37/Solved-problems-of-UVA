#include <stdio.h>
#include <string.h>
int main()
{
    char a[434];
    int i, len;
    while(gets(a)){
        len = strlen(a);
        for(i = 0; i < len; i++){
           if(a[i]>=65 && a[i]<=90){
                a[i] = 'a'+(a[i]-'A');
           }
        }
        printf("%s\n", a);
    }
    return 0;
}
