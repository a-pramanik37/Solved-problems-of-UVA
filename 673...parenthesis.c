#include <stdio.h>
#include <string.h>
int main()
{
    char str[128];
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%c", &str[i]);

    if(strlen(str) % 2==0) printf("Yes\n");
    else printf("No\n");
    }
}
