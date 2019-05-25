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

    char a[5000];

    int n = 131071, i, sum, j;

    while(scanf("%s", &a)!=EOF){


        if(a[0]==0){
            printf("YES\n");
        }

        else {

            sum = 0;
        for(i = 0; i<strlen(a)-1; i++){
            sum = sum*2+a[i]-48;

            if(sum>=n){
                sum = sum/n;
            }
        }

        if(sum%n==0) printf("YES\n");
        else printf("NO\n");

        }
    }


    return 0;
}
