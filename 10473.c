#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    char a[5000], b[5000];

    long long i, len,sum, p, rem, j;

    while(scanf("%s", &a)){
        len = strlen(a);

        if(a[0]=='-') break;

        if(a[0]=='0' && a[1]=='x'){
                sum = 0;
            for(i = len-1, p = 0; i>=2; i--, p++){
                if(a[i]=='A') sum+= 10*(pow(16, p));
                else if(a[i]=='B') sum+= 11*(pow(16, p));
                else if(a[i]=='C') sum+= 12*(pow(16, p));
                else if(a[i]=='D') sum+= 12*(pow(16, p));
                else if(a[i]=='E') sum+= 14*(pow(16, p));
                else if(a[i]=='F') sum+= 15*(pow(16, p));
                else {
                        sum+= (a[i]-48)*pow(16, p);
                }
            }
            printf("%lld\n", sum);
        }
        else {
                sum = 0;
            for(i = 0; i<len; i++){
                sum = sum*10+(a[i]-48);
            }
            long long S = sum;
            long long count=0;
            while(S>0){
                rem = S%16;
                S = S/16;
                count++;
            }

            for(i = 0; i<count; i++){
                rem = sum%16;

                if(rem==10) b[i]=='A';

                else if(rem==11) b[i]='B';
                else if(rem==12) b[i]='C';
                else if(rem==13) b[i]='D';
                else if(rem==14) b[i]='E';
                else if(rem==15) b[i]='F';
                else{
                    b[i]= rem+48;
                }
                sum = sum/16;
            }
            printf("0x");
            /*if(count==0) printf("0");*/
            for(i = count-1; i>=0; i--){
                printf("%c", b[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
