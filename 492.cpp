#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
char a[100000006], b[1000006];

int main()

{


    int i, j, k;

    while(gets(a)){
        j = 0;
        for(i = 0; i<strlen(a); i++){
            if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122)){

                b[j] = a[i];
                j++;

            }

            else{

                 if(j==0) printf("%c", a[i]);

                else{
                        i = i-1;

                    b[j] = '\0';

                    if(b[0]=='a'||b[0]=='e'||b[0]=='i'||b[0]=='o'||b[0]=='u'||b[0]=='A'||b[0]=='E'||b[0]=='I'||b[0]=='O'||b[0]=='U'){
                        /*for(k = 0; k<strlen(b); k++){
                            printf("%c", b[k]);
                        }*/
                        printf("%s", b);
                        /*strcpy(b, "");*/
                    }

                    else{
                        /*for(k= 1; k<strlen(b); k++){
                            printf("%c", b[k]);
                        }*/
                        printf("%s", b+1);
                        printf("%c", b[0]);
                        /*strcpy(b, "");*/
                    }

                    printf("ay");

                    j = 0;
                }
            }
        }

        printf("\n");

    }
    return 0;
}
