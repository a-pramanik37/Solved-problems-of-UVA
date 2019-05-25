#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int a[1000006];



int main()

{

    int n, i, j,coun;

    for(i = 2; i<=1000000; i++){
        if(a[i]==0){
            for(j = i*2; j<=1000000; j = j+i){
                a[j] = 1;
            }
        }
    }

    while(scanf("%d", &n)==1 && n!=0){

        coun = 0;


        for(i = 2; i<=n; i++){
            if(a[i]==0){
                if(n%i==0) {
                        coun++;

                }
            }
        }
        printf("%d : %d\n", n, coun);
    }
    return 0;

}
