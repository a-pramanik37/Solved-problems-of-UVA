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

    char a[1000], b[1000], c[1000], x[1000], y[1000], temp[1000];


    int i, k,j, t, p, sum;
    scanf("%d", &t);

    for(p = 1; p<=t; p++){

        scanf("%s%s", a, b);
        j = 0;
        for(i = strlen(a)-1; i>=0; i--){
            x[j] = a[i];
            j++;
        }
        x[j] = '\0';
        j = 0;
        for(i = strlen(b)-1; i>=0; i--){
            y[j] = b[i];
            j++;
        }
        y[j] = '\0';


        if(strlen(x)>strlen(y)){
            strcpy(temp, x);
            strcpy(x, y);
            strcpy(y, temp);
        }





                strcpy(c, x);
                for(j = 0; j<(strlen(y)-strlen(x)); j++){
                temp[j] = '0';
            }
            temp[j] = '\0';


            strcat(temp, c);
            strcpy(x, temp);





        sum = 0;
        j = 0;
        for(i = strlen(y)-1; i>=0; i--){

            sum = sum+y[i]-48+x[i]-48;

            if(sum<10){
                a[j] = sum+'0';
                j++;
                sum = 0;
            }
            else{
                a[j] = (sum%10)+'0';
                j++;
                sum = sum/10;
            }

        }
        if(sum==0) a[j]='\0';
        else {
            a[j] = sum+'0';
            a[j+1] = '\0';
        }

        int flg = 0;

        for(j=0; j<strlen(a); j++){

            if(a[j]!='0'){
                    printf("%c", a[j]);
                    flg = 1;
            }
            else if(flg==1 && a[j]=='0'){
                printf("%c", a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
