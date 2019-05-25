#include <stdio.h>
int a[1000005];
int main()
{
    int i, j, n, rem, sum, N;
    for(i = 2; i <= 1000005; i++){
        if(a[i]==0){
            for(j = i*2; j <= 1000005; j = j+i){
                a[j]=1;
            }
        }
    }
    while(scanf("%d", &n)==1){
        if(a[n]==1) printf("%d is not prime.\n", n);
        else if(a[i]==0){
            N = n;
            sum = 0;
            while(n>0){
                rem = n%10;
                sum = sum*10+rem;
                n = n/10;
            }
            if(a[sum]==0 && sum!=N) printf("%d is emirp.\n", N);
            else printf("%d is prime.\n", N);
        }
    }
    return 0;
}
