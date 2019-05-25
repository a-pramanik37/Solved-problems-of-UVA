#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char a[1000], b[1000];
    int i, maxx, j, flg;

    while(scanf("%s", a)==1 && strcmp(a, "E-N-D")!=0){
            maxx = 0;
            flg = 0;
            for(i = 0; i<strlen(a); i++){
                if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122) || (a[i]=='-')){
                    flg = 0;
                }

                else {
                    flg =1;
                    break;
                }
            }
        if(strlen(a)>maxx && flg==0 && strcmp(a, "E-N-D")!=0){
            maxx = strlen(a);
            strcpy(b, a);
        }
        while(strcmp(a, "E-N-D")!=0){
            scanf("%s", a);
            for(i = 0; i<strlen(a); i++){
                 if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122) || (a[i]=='-')){
                    flg = 0;
                }

                else {
                    flg =1;
                    break;
                }
            }

            if(strcmp(a, "E-N-D")!=0 && flg==0)
            {
                if(strlen(a)>maxx){
            maxx = strlen(a);
            strcpy(b, a);
        }
            }

        }
        for(i = 0; i<strlen(b); i++){
            if(b[i]>=65 && b[i]<=90){
                b[i] = b[i]+32;
            }
        }
        printf("%s\n", b);

    }
    return 0;
}
