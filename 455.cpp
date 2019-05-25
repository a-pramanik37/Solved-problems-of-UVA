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

    char a[2000], temp1[1000], temp2[1000];

    int t, i, j, k ,p, x, y, coun, flg, ans;

   while(scanf("%s", a)){

        j = 1;
        x = 0;

    for(i = 0; i<strlen(a); i++){
        for(k = 0; k<j; k++){
            temp1[k] = a[k];
        }
        temp1[k] = '\0';
        x = x+j+1
        int l = j;
        for(p = 0; p<strlen(a); p++){
            for(q = l; q<x; q++){
                temp2[q] = a[q];
            }
            temp2[q] = '\0';
            if(strcmp(temp1, temp2)!=0) break;
        }
        j++;
    }

   }
}
