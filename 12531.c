#include <stdio.h>
int main()
{
    int t;
    while(scanf("%d", &t)==1){
        if(t%6==0){
            printf("Y\n");
        }
        else printf("N\n");
    }
    return 0;
}
