#include <stdio.h>
int main()
{
    int a, b, i=0;
    while(scanf("%d%d", &a, &b) == 2){
            i++;
            /*it is not possible to increase the probability of marriage*/
        if(a==0 &&b==0) break;
        else if(a==1) printf("Case %d: :-\\\n", i);
        else if(a<=b) printf("Case %d: :-|\n", i);
        else if(a > b) printf("Case %d: :-(\n", i);
    }
    return 0;
}
