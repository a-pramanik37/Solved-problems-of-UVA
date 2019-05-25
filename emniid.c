#include <stdio.h>
#include <math.h>
int main()
{
    long long n, p, m, i, b;
    while(scanf("%lld%lld", &n, &p) != EOF){
        for(i =1; i <= n; i++){
            b = p*(1/n);
            p = b;
        }
        printf("%lld\n", p);
    }
    return 0;

}
