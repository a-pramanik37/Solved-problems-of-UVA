#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char a[1000], b[1000], c[1000];
    int i, maxx=0, j, coun;

    while(scanf("%s", a)){
           if(strcmp(a, "E-N-D")==0){

        for(i = 0, j=0; i<strlen(b); i++){
           if((b[i]>=65 && b[i]<=90)|| (b[i]>=97 && b[i]<=122) || (b[i]=='-')){
            c[j] = b[i];
            if(c[j]>=65 && c[j]<=90){
                c[j] = c[j]+32;
            }
            j++;
           }
        }
        c[j]='\0';

            printf("%s\n",c);
            break;
           }
            coun = 0;
            for(i = 0; i<strlen(a); i++){
                if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122) || (a[i]=='-')){
                    coun++;
                }


            }
        if(coun>maxx){
            maxx = coun;
            strcpy(b, a);
        }


    }
    return 0;
}

