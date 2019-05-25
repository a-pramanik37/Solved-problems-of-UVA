#include <stdio.h>
int main()
{
    int N, a, b, c, i;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        scanf("%d%d%d", &a, &b, &c);

            if((a+b > c) && (b+c > a) && (c+a > b)) printf("OK\n");

            else printf("Wrong!!\n");

    }
    return 0;
}
