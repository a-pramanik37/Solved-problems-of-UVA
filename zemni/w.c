#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    int i, j, len;
    while(gets(a)!=EOF){
        len = strlen(a);
        for(i = len-1, j=0; i>=0; i--, j++){
            b[j]=a[i];
        }
        b[j]='\0';
        printf("%s\n", b);
    }
    return 0;
}
