#include <stdio.h>
#include <string.h>
int main()
{
    char a[10000];
    int i, j, len, flg;
    while(gets(a)){
        len = strlen(a);
        flg = -1;
        for(i = 0; i <len; i++){
            if(a[i]==' '){
                for(j = i-1; j >flg; j--){
                    printf("%c", a[j]);
                }
                printf(" ");
            flg = i;
            }

        }
        for(i = len-1; i>flg; i--){
            printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}
