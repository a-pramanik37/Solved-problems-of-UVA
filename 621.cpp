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

    int t, i, j;
    char a[500];

    scanf("%d", &t);
    for(i = 1; i<=t; i++){
        scanf("%s", &a);

        for(j = 0; j<strlen(a); j++){
            if(a[j]=='1' || a[j]=='4'){

                if(a[j+1]=='3' && a[j+2]=='5'){
                    printf("-\n");
                    break;
                }
                else if(a[j-1]=='9' && a[j+1]=='4'){
                    printf("*\n");
                    break;
                }
                else if(a[j-1]=='0' && a[j-2]=='9' && a[j-3]=='1'){
                    printf("?\n");
                    break;
                }

                else if(a[j+1]=='\0'){
                    printf("+\n");
                    break;
                }

            }
            else if(a[j]=='7' && a[j+1]=='8'){

                if(a[j+2]=='3' && a[j+3]=='5'){
                    printf("-\n");
                    break;
                }
                else if(a[j+3]=='4' && a[j-1]=='9'){
                    printf("*\n");
                    break;
                }

                else if(a[j-1]=='0' && a[j-2]=='9' && a[j-3]=='1'){
                    printf("?\n");
                    break;
                }

                else {
                    printf("+\n");
                    break;
                }

            }
        }
    }
    return 0;

}
