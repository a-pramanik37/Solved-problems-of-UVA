#include <stdio.h>
int main()

{
   long ara[1000], N, i, rem, count, n;

   while(scanf("%ld", &N) == 1){
   if(N < 0) {
        break;
   }
   n = N;
   count  = 0;

   while(N > 0){
    //rem = N %3;
    count++;
    N = N/3;

   }
   for(i = 0; i < count; i++){
    rem = n % 3;
    ara[i] = rem;
    n = n /3;
   }
   if(count == 0){
    printf("0");
   }
   /*in the loop below,, there is little confusion as the 'i' is counted from 'count-1' .. -_- */
   /*mahbub vai k jigges korte hobe!!*/
   for(i = count-1; i >=0; i--){
    printf("%ld", ara[i]);
   }
   printf("\n");
}
return 0;
}
