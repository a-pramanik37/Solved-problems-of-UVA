#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int a[32770];
int b[32770];

int main()

{
    int i, j, k, x, y, p, q, n, ind, cnt;

    a[0] =1;
    a[1] = 1;
    for(i = 2; i<=32770; i++){
        if(a[i]==0){
            for(j = i*2; j<=32770; j+=i){
                a[j]=1;
        }
    }
    }

    while(scanf("%d", &n)==1 && n!=0){
        j = 0;
        for(i = 2; i<n; i++){
            if(a[i]==0){
                b[j] = i;
                j++;
            }
        }
        ind = j;
        cnt = 0;
        for(i = 0; i<ind; i++){
            for(j = i; j<ind; j++){
                if(b[i]+b[j]==n) cnt++;
            }
        }
        printf("%d\n", cnt);

    }
    return 0;
}
