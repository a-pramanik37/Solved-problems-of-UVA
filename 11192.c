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

    char a[300], b[300];
    int ar[500];
    int i, j, coun, lenOFgroup, group, lenOFstr;

    while(scanf("%d", &group)==1 && group!=0){
        scanf("%s", &a);

        for(i = 0, j = 1; i<strlen(a); i++){
            b[j] = a[i];
            j++;
        }
        b[j] = '\0';
        lenOFstr = j;

        lenOFgroup = lenOFstr/group;
        memeset(ar, 0, sizeof ar);

        for(i = 1; i<=lenOFstr; i++){
            if(i%lenOFgroup==0){
                for(j = i; j>=(i-lenOFgroup); j--){
                    printf("%c", a[j]);
                }
            }
        }
        printf("\n");


    }
    return 0;
}
