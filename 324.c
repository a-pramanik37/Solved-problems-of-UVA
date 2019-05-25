#include <stdio.h>
#include <string.h>
char a[102][102];

int main()

{

    int i=0, j, k, maxx=0, x, y, p, q, sum;
    char b[10000];

    while(scanf("%s", a[i])){


        if(strlen(a[i])>maxx){
            maxx = strlen(a[i]);
        }

        if(strcmp(a[i], "0")==0){

            p = i-1;

            for(i = 0; i<=p; i++){

                    if(strlen(a[i])<maxx){
                strrev(a[i]);

                for(j = strlen(a[i]); j<maxx; j++){
                    a[i][j] = '0';
                }

                strrev(a[i]);
                    }

            }


            k = 0;
            sum = 0;
           for(i =maxx-1; i>=0; i--){

            for(j = 0; j<=p; j++){
                sum = sum+(a[j][i]-'0');
            }

            if(sum>9){
                b[k] = (sum%10)+48;
                sum = sum/10;
                k++;
            }

            else if(sum<10){
                b[k] = sum+'0';
                sum = 0;
                k++;
            }
           }


           if(sum==0){
            b[k]='\0';
           }
           else{
            while(sum>0){
                b[k] = sum%10+48;
                sum = sum/10;
                k++;
            }
            b[k]='\0';
           }
           strrev(b);

        printf("%s\n", b);

        break;

        }
        i++;

    }

    return 0;
}


