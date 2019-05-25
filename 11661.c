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

    int L, i, j, coun, flg, minn;
    char a[2000005], ch;

    while(scanf("%d", &L)==1 && L!=0){

        scanf("%s", &a);
        flg= 0;
        coun = 0;
        ch = 'P'
        minn = 20000000;

        for(i = 0; i<strlen(a); i++){

            if(a[i]=='Z'){

                flg=1;
                break;
            }

            else if(a[i]=='R' || a[i]=='D'){

                if(a[i]!=ch){
                    ch = a[i];
                    if(coun<minn) minn = coun;

                    coun = 0;
                }
                if(a[i]==ch) coun++;

            }

            else if(a[i]=='.') coun++;

        }

        if(flg==1) printf("0\n");
        else printf("%d\n", minn);


    }
    return 0;
}
