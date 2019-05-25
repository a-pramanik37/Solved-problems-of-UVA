#include <stdio.h>
#include <string.h>
int main()
{
    char a[500];

    double t, O, H, N, C, i, sum;
    int j;
    scanf("%lf", &t);
    for(i = 1; i<= t; i++){
        scanf("%s", &a);

        O=0, H=0, N=0, C=0;

        sum = 0;


        for(j = 0; j<=strlen(a); j++){
            if((a[j+1]>=65 && a[j+1]<=90)|| a[j+1]=='\0'){
                if(a[j]=='O') O++;
                else if(a[j]=='C') C++;
                else if(a[j]=='H') H++;
                else if(a[j]=='N') N++;
            }
            else if((a[j+1]>=48 && a[j+1]<=57)||a[j+1]=='\0'){
                if((a[j+2]>=48 && a[j+2]<=57)||a[j+1]=='\0'){
                    if(a[j]=='O') O = O+((a[j+1]-48)*10+(a[j+2]-48));
                else if(a[j]=='C') C = C + ((a[j+1]-48)*10+(a[j+2]-48));
                else if(a[j]=='H') H = H + ((a[j+1]-48)*10+(a[j+2]-48));
                else if(a[j]=='N') N = N+((a[j+1]-48)*10+(a[j+2]-48));
                }
                else{
                    if(a[j]=='O') O = O+a[j+1]-48;
                else if(a[j]=='C') C = C+a[j+1]-48;
                else if(a[j]=='H') H = H+a[j+1]-48;
                else if(a[j]=='N') N = N+a[j+1]-48;
                }
            }


        }

        sum = O*16.00+C*12.01+H*1.008+N*14.01;

        printf("%.3lf\n", sum);
    }
    return 0;
}
