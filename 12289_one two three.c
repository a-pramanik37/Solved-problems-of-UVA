#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int t, i, len, count;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%s", str);
        len = strlen(str);
        if(len==5){
            printf("3\n");
        }
        else{
            count = 0;
            if(str[0]=='o') count++;
            if(str[1]=='n') count++;
            if(str[2]=='e') count++;
            if(count >= 2) printf("1\n");
            else printf("2\n");
        }

    }
    return 0;
}
