#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int n, i, j, sum, a[10000];

    while(scanf("%d", &n)==1 && n!=0){

        for(i = 0; i<n; i++){
            scanf("%d", &a[i]);
        }

        sort(a, a+n);

        int flg = 0;

        for(i =1; i<n; i++){
            if(a[i]-a[i-1]>200){
                flg = 1;
                break;
            }
        }
        if(flg==0){
            if(2*(1422-a[n-1])>200){
                flg  = 1;
            }
        }

        if(flg==1) printf("IMPOSSIBLE\n");


            else printf("POSSIBLE\n");


    }
    return 0;
}
