#include <stdio.h>
int main()
{
    int a, b, c, d, i, t;
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d%d%d", &a, &b, &c);

            if(a>b){
                if(a>c){
                    if(b>c) d = b;
                    else d = c;
                }
            }
            if(b>a){
                if(b>c){
                    if(a>c) d = a;
                    else d = c;
                }
            }
            if(c>b){
                if(c>a){
                    if(b>a) d = b;
                    else d = a;
                }
            }

        printf("Case %d: %d\n", i, d);
    }
    return 0;
}
