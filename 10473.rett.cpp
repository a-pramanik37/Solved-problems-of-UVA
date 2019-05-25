#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char a[5000], b[5000];

    long long int i, len,sum, p, rem, j, n;

    while(scanf("%s", a)==1){
        len = strlen(a);



        if(a[0]=='0' && a[1]=='x'){
                sum = 0;
            for(i = 2, p = 0; i<len; i++){
                if(a[i]=='A') sum= sum*16+10;
                else if(a[i]=='B') sum= sum*16+11;
                else if(a[i]=='C') sum= sum*16+12;
                else if(a[i]=='D') sum= sum*16+13;
                else if(a[i]=='E') sum= sum*16+14;
                else if(a[i]=='F') sum= sum*16+15;

                else {
                        sum = sum*16+(a[i]-48);
                }
            }


             printf("%lld\n", sum);



        }
        else {

            n = atoi(a);

            if(n<0) break;

                sum = 0;
            for(i = 0; i<len; i++){

                sum = sum*10+(a[i]-48);
            }



             i=0;

            while(sum>0){
                rem = sum%16;



                if(rem==10) b[i]='A';

                else if(rem==11) b[i]='B';
                else if(rem==12) b[i]='C';
                else if(rem==13) b[i]='D';
                else if(rem==14) b[i]='E';
                else if(rem==15) b[i]='F';
                else{
                    b[i]= rem+48;
                }
                sum = sum/16;
                i++;

            }
            printf("0x");

            for(j = i-1; j>=0; j--){
                printf("%c", b[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
