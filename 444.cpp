#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int i, j, k, p, q, x, y;

    char a[1000];

    while(gets(a)){

        if(a[1]>=48 && a[1]<=57){
                for(i = strlen(a)-1; i>=0;){
                        x = 0;
                    if(a[i]=='1'){
                        for(j = i; j>=(i-2); j--){
                            x = x*10+(a[j]-48);
                        }
                        i = i-3;
                    }
                else {
                    for(j = i; j>=i-1; j--){
                        x = x*10+(a[j]-48);
                    }
                    i = i-2;
                }

                printf("%c", x);

                }

        }


        else{
            for(i = strlen(a)-1; i>=0; i--){
                p = a[i];
                while(p>0){
                    printf("%d", p%10);
                    p = p/10;
                }
            }
        }

        printf("\n");

    }
    return 0;
}
