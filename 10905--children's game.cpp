#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    char a[60][300], x[1000], y[1000];

    int i, j ,k , n;

    while(scanf("%d", &n)==1 && n!=0){

        for(i = 0; i<n; i++){
            scanf("%s", a[i]);
        }

        for(i = 0; i<(n-1); i++){
            for(j = 0; j<(n-1)-i; j++){
                strcpy(x, a[j]);
                strcat(x, a[j+1]);
                strcpy(y, a[j+1]);
                strcat(y, a[j]);

                if(strcmp(x, y)<0) swap(a[j], a[j+1]);
            }
        }

        for(i = 0; i<n; i++){
            printf("%s", a[i]);
        }
        printf("\n");

    }
    return 0;
}
