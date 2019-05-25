#include <stdio.h>
#include <math.h>
int main()
{
    long long n, m;
    while(scanf("%lld", &n) != EOF){
            if(n == 0) break;
       m = sqrt(n);
       if(m*m==n) printf("yes\n");
       else printf("no\n");
    }
    return 0;
}
