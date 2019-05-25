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
            for(j = 0; j<(n-1)-i; j++){
                if(a[j].mv>a[j+1].mv){
                        temp = a[j].v;
                        a[j].v = a[j+1].v;
                        a[j+1].v = temp;

                        temp = a[j].mv;
                        a[j].mv= a[j+1].mv;
                        a[j+1].mv = temp;
                }

               else if(a[j].mv==a[j+1].mv){
                if((a[j].v%2==0  && a[j+1].v%2!=0)){

                        temp = a[j].v;
                        a[j].v = a[j+1].v;
                        a[j+1].v = temp;

                }

                else if(a[j].v%2!=0 && a[j+1].v%2!=0 ){

                        if(a[j].v<a[j+1].v){
                             temp = a[j].v;
                        a[j].v = a[j+1].v;
                        a[j+1].v = temp;
                        }
                }

                else if(a[j].v%2==0 && a[j+1].v%2==0){

                        if(a[j].v>a[j+1].v) {
                             temp = a[j].v;
                        a[j].v = a[j+1].v;
                        a[j+1].v = temp;
                        }

                }

               }

                }
            }
            printf("%d %d\n", n, m);

            for(i = 0; i<n; i++){
                printf("%d \n", a[i].v);
            }

        }
return 0;
}
