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

   int a[100], i, j, k, p, q, flg, cnt, c, count, n;

   while(scanf("%d", &n)==1 && n!=0){
    for(i = 1; i<=n; i++){
        a[i]=i;
    }
    c = 0;
    cnt = 1;

    /*if(n==2){
        printf("Discarded card: 1\n");
        printf("Remaining card: 2\n");
    }

    else{*/
        printf("Discarded cards:");

    while(1){

             count = 0;
        for(i = 1; i<=n; i++){
            if(a[i]>0){
                p = a[i];
                count++;
            }
        }
        if(count<2)break;

        for(i = 1; i<=n; i++){
            if(cnt==1 && a[i]>0){

                if(c==0){
                    printf(" %d", a[i]);
                    c = 1;
                }
                else printf(", %d", a[i]);

                a[i] = -1;
                cnt = 0;

            }
            else if(cnt==0 && a[i]>0){
                cnt++;

            }
        }

    }

    printf("\n");

    printf("Remaining card: %d\n", p);
    /*}*/

   }
    return 0;
}
