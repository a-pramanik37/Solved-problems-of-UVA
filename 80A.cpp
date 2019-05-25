#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a[55];

int main()

{

    int n, m, i, j, flg;

    for(i = 2; i<=53; i++){
        if(a[i]==0){
            for(j = i*2; j<=55; j = j+i){
                a[j] = 1;
            }
        }
    }

    while(scanf("%d%d", &n, &m)==2){

        flg = 0;
        for(i = n+1; i<=50; i++){
            if(a[i]==0){
                if(i!=m){
                    flg = 1;
                    break;
                }
                else if(i==m) break;
            }
        }

        if(flg==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
