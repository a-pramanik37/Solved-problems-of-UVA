#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
char a[2000][75], b[100], ct[100];
int c[2006];
int main()

{
    int n, i, j, k, x, flg;

    while(scanf("%d", &n)!=EOF){
    i = 0;
    for(x = 1; x<=n; x++){
        scanf("%s", ct);
        gets(b);
        flg = 0;

        for(j = 0; j<i; j++){
            if(strcmp(ct, a[j])==0){
                    c[j]++;
                flg = 1;
                break;
            }
        }
        if(flg==0) {
                strcpy(a[i], ct);
                c[i]++;
            i++;
        }
    }
    for(j = 0; j<i-1; j++){
        for(k = j+1; k<i; k++){
            if(strcmp(a[j], a[k])>0){
                swap(a[j], a[k]);
                swap(c[j], c[k]);
            }
        }
    }
    for(j = 0; j<i; j++){
        printf("%s %d\n", a[j], c[j]);
    }

    }
    return 0;
}
