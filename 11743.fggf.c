#include <stdio.h>
#include <string.h>
int main()
{
    char a[500];
    int t, i, s1, s2, j, len;

    scanf("%d ", &t);
    for(i = 1; i <=t; i++){
        gets(a);
        len = strlen(a);
        s1 = 0;
        s2 = 0;
        for(j = 0; j< len; j++){
            if(a[j]==' '|| a[j]=='\0'){
                s1 = s1+(((a[j-2]-48)*2)%10+((a[j-2]-48)*2)/10 +((a[j-4]-48)*2)%10+((a[j-4]-48)*2)/10);
                s2 = s2+(((a[j-1]-48))%10+((a[j-1]-48))/10+((a[j-3]-48))%10+((a[j-3]-48))/10);
            }
        }

        printf("%d %d\n", s1, s2);
    }
    return 0;
}

