#include <stdio.h>
int main()
{
    long long a, b, c, d, L, i, count, fnc;
    while(scanf("%lld%lld%lld%lld%lld", &a, &b, &c, &d, &L) == 5){
        if(a==0 && b==0 && c==0 && d==0 && L==0) break;
        count = 0;
        for(i = 0; i <= L; i++){
            fnc = (i*i*a)+(i*b)+c;
            if(fnc % d== 0){
                count++;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
