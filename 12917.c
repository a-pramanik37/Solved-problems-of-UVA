#include <stdio.h>
int main()
{
    int p, h, o;
    while(scanf("%d%d%d", &p, &h, &o)==3){
        if(o-h>=p) printf("Props win!\n");
        else printf("Hunters win!\n");
    }
    return 0;
}
