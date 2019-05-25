#include <stdio.h>
int main()
{
    int T, a, b, c, i;
    scanf("%d", &T);
   for(i = 1; i <= T; i++){
        scanf("%d%d%d", &a, &b, &c);
              if(a*a + b*b == c*c){
            printf("yes\n");
        }
        else printf("no\n");
    }
    return 0;
}
