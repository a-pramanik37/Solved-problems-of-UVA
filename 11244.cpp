#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int i, j, k, r, c;

    char a[102][102], ch;

    while(scanf("%d%d", &r, &c)!=EOF){

        if(r==0 && c==0) break;
        getchar();
        for(i = 0; i<r; i++){

                    scanf("%s", a[i]);


        }

        int coun=0;

        for(i = 0; i<r; i++){
            for(j =0; j<c; j++){


                    if(a[i][j]=='*'&& a[i][j+1]!='*'  &&  a[i][j-1]!='*'  &&  a[i-1][j]!='*'  &&  a[i-1][j+1]!='*' &&  a[i-1][j-1]!='*'  &&  a[i+1][j]!='*'  &&  a[i+1][j+1]!='*'  &&  a[i+1][j-1]!='*') coun++;


            }
        }

        printf("%d\n", coun);
        for(i = 0; i<r; i++){
            for(j = 0; j<c; j++){
                a[i][j]='\0';
            }
        }


    }
    return 0;
}
