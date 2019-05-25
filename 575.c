#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{

    char a[5000];

    long long len , i, sum, sk;

    while(scanf("%s", &a)){
        len = strlen(a);

        sum = 0;
        if(len==1 && a[0]=='0') break;
        for(i = len-1, sk = 1; i >= 0; i--, sk++){
            sum+= (a[i]-48)* (pow(2, sk)-1);
        }


        printf("%lld\n", sum);

    }

    return 0;
}
