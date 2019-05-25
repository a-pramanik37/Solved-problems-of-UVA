#include <stdio.h>
int main()
{
    long long  i, t, n, m, rem, sum1, sum2, ans, sum;
    scanf("%lld", &t);
    for(i = 1; i <= t; i++){
        scanf("%lld%lld", &n, &m);
        sum1 = 0;
        sum2 = 0;
        while(n>0){
            rem = n%10;

            sum1 = sum1*10+rem;

            n = n/10;

        }
        while(m>0){
            rem = m%10;
            sum2 = sum2*10+rem;
            m = m/10;
        }
        sum = sum1+sum2;
        ans = 0;
        while(sum>0){
            rem = sum%10;
            ans = ans*10+rem;
            sum = sum/10;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
