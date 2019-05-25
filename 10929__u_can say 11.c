#include <stdio.h>
#include <string.h>
int main()
{
    char a[2000];
    int sum, len, i;
    while(scanf("%s", &a)){
            sum = 0;
       len = strlen(a);


       for(i = 0; i<len; i++){
        sum  = sum*10+a[i]-48;
        sum = sum%11;
       }
       if(sum==0 && len==1) break;
       else if(sum==0){
        printf("%s is a multiple of 11.\n", a);
       }
       else printf("%s is not a multiple of 11.\n", a);
    }
    return 0;
}
