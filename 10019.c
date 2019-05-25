#include <stdio.h>
int main()
{
    intt, n, hex, dec, b1 ,b2, i, j, rem;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        b1 = 0;
         b2 = 0;
         dec = n;
         while(dec>0){
            rem = dec%2;
            if(rem==1){
                b1++;
            }
            dec = dec/2;
         }


    }
}
