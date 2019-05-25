#include <stdio.h>
int main()
{
    int t, n, i, sum1, sum2, j, a, b, p, q, s,s1, sum3, sum4;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){

        scanf("%d", &n);
        sum3=0;
        sum4=0;
        for(j = 1; j <= n; j++){
            scanf("%d", &a);
            sum1 = 0;
        sum2 = 0;
            b=a;
            if(a>29){
                p = (a-29)/30;
                if((a-29)%30==0) sum1 = p*10+10;
                else sum1 = (p+1)*10+10;
            }
            else sum1 = 10;

            if(b>59){
                q = (b-59)/60;
                if((b-59)%60==0) sum2 = q*15+15;
                else sum2 = (q+1)*15+15;
            }
            else sum2 = 15;

            sum3 = sum3+sum1;
            sum4 = sum4+sum2;
        }
        if(sum3<sum4) printf("Case %d: Mile %d\n", i, sum3);
        else if(sum3>sum4) printf("Case %d: Juice %d\n", i, sum4);
        else if(sum3==sum4) printf("Case %d: Mile Juice %d\n", i, sum3);
    }
    return 0;
}
