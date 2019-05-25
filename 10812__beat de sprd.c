#include <stdio.h>
int main()
{
    long int n, s, d, a, b, i;
    scanf("%ld", &n);
    for(i = 1; i <= n; i++){
        scanf("%ld%ld", &s, &d);
        if(d > s || (s-d)%2==1){
            printf("impossible\n");
        }
        else {
            b = (s-d)/2;
            a = b+d;
            printf("%ld %ld\n", a, b);
        }
    }
    return 0;
}
