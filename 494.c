#include <stdio.h>
#include <string.h>
int main()
{
    char a[5000];
    int i, count, len, j;
    while(gets(a)){
        len = strlen(a);
        for(i = 0; i <len ; i++){
            if(((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))){
                a[i]=a[i];
            }
            else a[i]=' ';
        }

        if(a[0]==' '){
                for(i = 0; i <len; i++){

            if(a[i]!=' '){
                for(j = i-1; j>= 0; j--){
                    a[j]='a';
                }
                 break;
            }

        }
        }
        count = 0;
        for(i = 0; i <len ;i++){
            if(a[i]==' ' && a[i+1]!=' ' && a[i+1] !='\0') count++;
        }
        printf("%d\n", count+1);
    }
    return 0;
}
