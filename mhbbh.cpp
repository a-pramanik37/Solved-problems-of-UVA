#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    int i, j, k, a[1000], sum, maxx, p, q, n;

    while(scanf("%d", &n)==1){
        for(i = 1; i<=n; i++){
            scanf("%d", &p);
            sum = 0;
            while(p>0){
                sum = sum+(p%10);
                p = p/10;
            }
            a[i] = sum;
        }
        maxx = 0;
       for(i = 1; i<n; i++){
        for(j = i+1; j<=n; j++){
            x = a[i]-a[j];
            q = abs(x);
            if(maxx<q) maxx = q;
        }
       }
        printf("%d\n", maxx);


    }
    return 0;
}
