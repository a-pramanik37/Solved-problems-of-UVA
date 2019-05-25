#include <stdio.h>
#include <string.h>

int main()
{
    int len, swap, i, p,q, k, j, x, y;
    char a[300000], ch;
    while(scanf("%d%d", &len, &swap)==2){
            scanf("%s", &a);
        for(i=1; i <= swap; i++){
            scanf("%d%d", &x, &y);
            for(j = 0; j<len; j++){
                if((a[j]-48)=='x') a[j] ='y-48';
                if((a[j]-48)=='y') a[j]='x-48';
            }
        }

    printf("%s\n", a);
    }
    return 0;
}
