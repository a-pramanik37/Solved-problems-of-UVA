#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int n, i, j, k, val1, val2, p, q, y;

    char a[60][500], c[1000], d[1000], ch,x[1000];

    while(scanf("%d", &n)==1){
            if(n==0) break;

        scanf("%c", &ch);

        for(i = 0; i<n; i++){
            scanf("%s", a[i]);
        }

        for(i = 0; i<n-1; i++){
            for(j = i+1; j<n; j++){
                strcpy(c, a[i]);
                strcat(c, a[j]);
                strcpy(d, a[j]);
                strcat(d, a[i]);
                val1 = atoi(c);
                val2 = atoi(d);
                if(val2>val1){
                    strcpy(x, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], x);
                }
            }
        }

        for(i = 0; i<n; i++){
            printf("%s", a[i]);
        }
        printf("\n");

    }
    return 0;
}
