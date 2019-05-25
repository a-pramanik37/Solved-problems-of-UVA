#include <stdio.h>
int main()
{
   long long int a[500][500], i, j, sum, flg, n, count, x, y;

   while(scanf("%lld", &n)==1){
    if(n==0) break;


    for(i = 1; i<= n; i++){
            sum = 0;
        for(j=1; j<=n; j++){
            scanf("%lld", &a[i][j]);

        }
    }


    count =0;

    for(i = 1; i<= n; i++){
            sum = 0;
        for(j = 1; j<=n; j++){
            sum = sum+a[i][j];
        }
    if(sum%2==1){
        count++;
        if(count ==1){
            x = i;

        }
        if(count>1) break;
    }
    }


    if(count>1) printf("Corrupt\n");

    else{

        count = 0;

        for(i = 1; i<= n; i++){
                sum = 0;
            for(j = 1; j<=n; j++){
                sum = sum+a[j][i];
            }
        if(sum%2==1){
            count++;

            if(count>1) break;


           if(count==1){


            y = i;
           }

        }
        }

        if(count==0) printf("OK\n");
        else if(count==1) printf("Change bit (%lld,%lld)\n", x, y);
        else printf("Corrupt\n");
    }

   }
   return 0;
}
