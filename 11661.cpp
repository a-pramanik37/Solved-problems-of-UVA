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
    char a[2000005], b[10];

    while(scanf("%d", &L)==1 && L!=0){

        scanf("%s", &a);
        flg= 0;
        coun = 0;
        b[0] = 'P';
        int gk = 0;
        minn = 20000000;

        for(i = 0; i<=strlen(a); i++){

            if(a[i]=='Z'){

                flg=1;
                break;
            }
             else if(a[i]=='.' && gk==1) coun++;

            else if(a[i]=='R' || a[i]=='D'){
                    gk = 1;
                if(a[i]==b[0]) coun++;



                else if(a[i]!=b[0]){

                    b[0] = a[i];
                    coun++;

                    if(coun<minn) minn = coun;

                    coun = 0;
                }


            }



        }

        if(flg==1) printf("0\n");
        else printf("%d\n", minn);


    }
    return 0;
}
