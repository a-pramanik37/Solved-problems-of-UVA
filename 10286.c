#include <stdio.h>
int main()
{
    double F;
    while(scanf("%lf", &F) != EOF){
            if(F < 0) break;
        printf("%.10lf\n", F + (F * 0.0674));
    }
    return 0;
}
