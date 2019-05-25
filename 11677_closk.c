#include <stdio.h>
int main()
{
    int H1, M1, H2, M2, a = 0, b, c = 0, d;
    while(scanf("%d%d%d%d", &H1, &M1, &H2, &M2) != EOF){
        if(H1==0 && M1==0 && H2==0 && M2==0) break;
        if(H1 != 0) a = H1 * 60;
        b = M1 + a;
        if(H2 != 0) c = H2 * 60;
        d = M2 + c;
        printf("%d\n", d-b);
    }
    return 0;
}
