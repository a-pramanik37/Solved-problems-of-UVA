#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct bappi
{
    int v;
    int mv;
};

int main()

{
    bappi a[10005];
    int i, j, k, n, m, temp;

    while(scanf("%d%d", &n, &m)==2){

            if(n==0 && m==0){
                    printf("0 0\n");
                    break;
            }

        for(i = 0; i<n; i++){
            scanf("%d", &a[i].v);
            a[i].mv = a[i].v%m;
        }

        for(i = 0; i<n-1; i++){
            for(j = n-1; j>i; j--){
                if(a[i].mv>a[j].mv){
                        temp = a[i].v;
                        a[i].v = a[j].v;
                        a[j].v = temp;

                        temp = a[i].mv;
                        a[i].mv= a[j].mv;
                        a[j].mv = temp;
                }

               else if(a[i].mv==a[j].mv){
                if((a[i].v%2==0  && a[j].v%2!=0)){

                        temp = a[i].v;
                        a[i].v = a[j].v;
                        a[j].v = temp;

                }

                else if(a[i].v%2!=0 && a[j].v%2!=0 ){

                        if(a[i].v<a[j].v){
                             temp = a[i].v;
                        a[i].v = a[j].v;
                        a[j].v = temp;
                        }
                }

                else if(a[i].v%2==0 && a[j].v%2==0){

                        if(a[i].v>a[j].v) {
                             temp = a[i].v;
                        a[i].v = a[j].v;
                        a[j].v = temp;
                        }

                }

               }

                }
            }
            printf("%d %d\n", n, m);

            for(i = 0; i<n; i++){
                printf("%d\n", a[i].v);
            }

        }
return 0;
}

