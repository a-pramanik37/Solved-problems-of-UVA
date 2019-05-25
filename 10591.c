#include <stdio.h>
int main()
{
    long long t, i, n, rem, N, rem1, sum;
    scanf("%lld", &t);
    for(i = 1; i <= t; i++){
        scanf("%lld", &n);
        N=n;
        sum = 0;
        while(n>0){
            rem = n%10;
            sum = sum+rem*rem;
            n = n/10;
        }
        n = sum;
        while(n>9){
            if(n<100){
                rem = n%10;
                n = (n/10)*(n/10)+rem*rem;
            }
            else{
                rem = n%10;
                rem1 = (n/10)%10;
                n = (n/100)*(n/100)+rem*rem+rem1*rem1;
            }
        }
        if(n==1) printf("Case #%lld: %lld is a Happy number.\n", i, N);
        else printf("Case #%lld: %lld is an Unhappy number.\n", i, N);
    }
}
