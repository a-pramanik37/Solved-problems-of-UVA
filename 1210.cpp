#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a[10005];

int main()

{

    int n, i, j, sum, store[10000], k,coun;

    for(i = 2; i<=10000; i++){
        if(a[i]==0){
            for(j = i*2; j<=10000; j = j+i){
                a[j] = 1;
        }
    }
    }



    while(scanf("%d", &n)==1 && n!=0){

         for(i = 2,k = 1; i<=n; i++){
        if(a[i]==0){
            store[k] = i;
            k++;
        }
    }
    coun = 0;

    for(i = 1; i<k; i++){
            sum = 0;
        for(j = i; j<k; j++){
            sum = sum+store[j];
            if(sum>n) break;
            else if(sum==n) {
                    coun++;
            break;
        }
    }


    }
    printf("%d\n", coun);
}
return 0;
}
