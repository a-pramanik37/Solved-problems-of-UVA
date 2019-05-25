#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int sum=0, n, t, i;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
       scanf("%s", &a);
       if(strlen(a)==6 && a[0]=='d'){
        scanf("%d", &n);
        sum = sum+n;
       }
        else printf("%d\n", sum);
    }
    return 0;
}
