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

    char a[30], b[40];

    int haat, i, j, sum,len, coun;

    while(scanf("%s%s", &a, &b)!=EOF){
            if(strlen(a)==0 && strlen(b)==0) break;

            if(strlen(a)<strlen(b)){
                for(i = strlen(a); i<strlen(b); i++){
                    a[i]='0';
                }
                len = strlen(b);
            }
            else if(strlen(b)<strlen(a)){
                for(i = strlen(b); i<strlen(a); i++){
                    b[i] = '0';
                }
                len = strlen(a);
            }
            else len = strlen(a);


        haat = 0;
        sum = 0;
        coun = 0;

       for(i = len-1; i>=0; i--){
            sum =(a[i]-48)+(b[i]-48)+haat;

            if(sum>9){
                coun++;
                haat = sum/10;
            }
       }

       if(coun==0) printf("No carry operation.\n");
    else if(coun==1) printf("1 carry operation.\n");
    else printf("%d carry operations.\n", coun);

    }
    return 0;
}
