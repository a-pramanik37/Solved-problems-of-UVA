#include <stdio.h>
#include <string.h>
int main()
{
    long long a, b, i, rem1, rem2, cr, count;
    while(scanf("%lld%lld", &a, &b)){
        if(a==0 && b==0) break;

        count = 0;
        cr = 0;
        while(a>=0 || b>=0){
            rem1 = a%10;
            rem2 = b%10;
            if((rem1+rem2+cr)>9){
                    cr = 1;
                count++;

            }
            if(a==0 && b==0 && cr==1)

            }
            a = a/10;
            b = b/10;

        }

        if(count==0) printf("No carry operation.\n");
        else if(count==1) printf("%lld carry operation.\n", count);
        else printf("%lld carry operations.\n", count);
    }
    return 0;
}
